#include "CffPass.hpp"

namespace obfusc {
    CffPass::CffPass() {}
    CffPass::~CffPass() {}

    bool CffPass::obfuscate(llvm::Module& mod, llvm::Function& func) {
        return true;
    }

}