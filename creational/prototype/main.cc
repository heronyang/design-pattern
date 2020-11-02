#include "document.h"
#include "letter.h"
#include "resume.h"

#include <iostream>
#include <map>
#include <memory>
#include <string>

enum DocumentType { RESUME, LETTER };

DocumentType GetDocumentTypeToLoadFromUser() {
  while (true) {
    std::cout << "Choose the document type to load:" << std::endl
              << "[1] Resume" << std::endl
              << "[2] Letter" << std::endl
              << "> ";
    std::string input;
    std::getline(std::cin, input);
    if (input == "1") {
      return DocumentType::RESUME;
    }
    if (input == "2") {
      return DocumentType::LETTER;
    }
    std::cout << "Unrecoginzed selection. Please select again." << std::endl;
  }
}

void UseDocument(Document &document) {
  document.Load();
  // ... and so on.
}

int main() {
  const Resume resume_prototype;
  const Letter letter_prototype;

  std::unique_ptr<Document> document;
  switch (GetDocumentTypeToLoadFromUser()) {
  case DocumentType::RESUME: {
    document = std::make_unique<Resume>(resume_prototype);
    break;
  }
  case DocumentType::LETTER: {
    document = std::make_unique<Letter>(letter_prototype);
    break;
  }
  default:
    std::cout << "Unknown document type." << std::endl;
    break;
  }

  UseDocument(*document);

  return 0;
}
