// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.UTF32Encoding
#include "System/Text/UTF32Encoding.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF32Encoding/System.Text.UTF32Decoder
  // [TokenAttribute] Offset: FFFFFFFF
  class UTF32Encoding::UTF32Decoder : public System::Text::DecoderNLS {
    public:
    // System.Int32 iChar
    // Size: 0x4
    // Offset: 0x30
    int iChar;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 readByteCount
    // Size: 0x4
    // Offset: 0x34
    int readByteCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UTF32Decoder
    UTF32Decoder(int iChar_ = {}, int readByteCount_ = {}) noexcept : iChar{iChar_}, readByteCount{readByteCount_} {}
    // Get instance field reference: System.Int32 iChar
    int& dyn_iChar();
    // Get instance field reference: System.Int32 readByteCount
    int& dyn_readByteCount();
    // public System.Void .ctor(System.Text.UTF32Encoding encoding)
    // Offset: 0x1D7BD08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF32Encoding::UTF32Decoder* New_ctor(System::Text::UTF32Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF32Encoding::UTF32Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF32Encoding::UTF32Decoder*, creationType>(encoding)));
    }
    // override System.Boolean get_HasState()
    // Offset: 0x1D7C21C
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState()
    bool get_HasState();
    // public override System.Void Reset()
    // Offset: 0x1D7C1FC
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
  }; // System.Text.UTF32Encoding/System.Text.UTF32Decoder
  #pragma pack(pop)
  static check_size<sizeof(UTF32Encoding::UTF32Decoder), 52 + sizeof(int)> __System_Text_UTF32Encoding_UTF32DecoderSizeCheck;
  static_assert(sizeof(UTF32Encoding::UTF32Decoder) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF32Encoding::UTF32Decoder*, "System.Text", "UTF32Encoding/UTF32Decoder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UTF32Encoding::UTF32Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF32Encoding::UTF32Decoder::get_HasState
// Il2CppName: get_HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF32Encoding::UTF32Decoder::*)()>(&System::Text::UTF32Encoding::UTF32Decoder::get_HasState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF32Encoding::UTF32Decoder*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF32Encoding::UTF32Decoder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF32Encoding::UTF32Decoder::*)()>(&System::Text::UTF32Encoding::UTF32Decoder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF32Encoding::UTF32Decoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
