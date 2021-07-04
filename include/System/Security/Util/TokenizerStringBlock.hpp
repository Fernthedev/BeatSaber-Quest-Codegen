// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.TokenizerStringBlock
  class TokenizerStringBlock : public ::Il2CppObject {
    public:
    // System.String[] m_block
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* m_block;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Security.Util.TokenizerStringBlock m_next
    // Size: 0x8
    // Offset: 0x18
    System::Security::Util::TokenizerStringBlock* m_next;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerStringBlock*) == 0x8);
    // Creating value type constructor for type: TokenizerStringBlock
    TokenizerStringBlock(::Array<::Il2CppString*>* m_block_ = {}, System::Security::Util::TokenizerStringBlock* m_next_ = {}) noexcept : m_block{m_block_}, m_next{m_next_} {}
    // public System.Void .ctor()
    // Offset: 0x1B50488
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenizerStringBlock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Util::TokenizerStringBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenizerStringBlock*, creationType>()));
    }
  }; // System.Security.Util.TokenizerStringBlock
  #pragma pack(pop)
  static check_size<sizeof(TokenizerStringBlock), 24 + sizeof(System::Security::Util::TokenizerStringBlock*)> __System_Security_Util_TokenizerStringBlockSizeCheck;
  static_assert(sizeof(TokenizerStringBlock) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerStringBlock*, "System.Security.Util", "TokenizerStringBlock");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Security::Util::TokenizerStringBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
