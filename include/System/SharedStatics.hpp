// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Util.Tokenizer
#include "System/Security/Util/Tokenizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.SharedStatics
  class SharedStatics : public ::Il2CppObject {
    public:
    // private System.Security.Util.Tokenizer/StringMaker _maker
    // Size: 0x8
    // Offset: 0x10
    System::Security::Util::Tokenizer::StringMaker* maker;
    // Field size check
    static_assert(sizeof(System::Security::Util::Tokenizer::StringMaker*) == 0x8);
    // Creating value type constructor for type: SharedStatics
    SharedStatics(System::Security::Util::Tokenizer::StringMaker* maker_ = {}) noexcept : maker{maker_} {}
    // Creating conversion operator: operator System::Security::Util::Tokenizer::StringMaker*
    constexpr operator System::Security::Util::Tokenizer::StringMaker*() const noexcept {
      return maker;
    }
    // Get static field: static private readonly System.SharedStatics _sharedStatics
    static System::SharedStatics* _get__sharedStatics();
    // Set static field: static private readonly System.SharedStatics _sharedStatics
    static void _set__sharedStatics(System::SharedStatics* value);
    // static public System.Security.Util.Tokenizer/StringMaker GetSharedStringMaker()
    // Offset: 0x1B4E7F4
    static System::Security::Util::Tokenizer::StringMaker* GetSharedStringMaker();
    // static public System.Void ReleaseSharedStringMaker(ref System.Security.Util.Tokenizer/StringMaker maker)
    // Offset: 0x1B4E9CC
    static void ReleaseSharedStringMaker(System::Security::Util::Tokenizer::StringMaker*& maker);
    // static private System.Void .cctor()
    // Offset: 0x1B50A0C
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1B50A04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedStatics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::SharedStatics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedStatics*, creationType>()));
    }
  }; // System.SharedStatics
  #pragma pack(pop)
  static check_size<sizeof(SharedStatics), 16 + sizeof(System::Security::Util::Tokenizer::StringMaker*)> __System_SharedStaticsSizeCheck;
  static_assert(sizeof(SharedStatics) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::SharedStatics*, "System", "SharedStatics");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::SharedStatics::GetSharedStringMaker
// Il2CppName: GetSharedStringMaker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Util::Tokenizer::StringMaker* (*)()>(&System::SharedStatics::GetSharedStringMaker)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::SharedStatics*), "GetSharedStringMaker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::SharedStatics::ReleaseSharedStringMaker
// Il2CppName: ReleaseSharedStringMaker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Util::Tokenizer::StringMaker*&)>(&System::SharedStatics::ReleaseSharedStringMaker)> {
  const MethodInfo* get() {
    static auto* maker = &::il2cpp_utils::GetClassFromName("System.Security.Util", "Tokenizer/StringMaker")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SharedStatics*), "ReleaseSharedStringMaker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maker});
  }
};
// Writing MetadataGetter for method: System::SharedStatics::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::SharedStatics::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::SharedStatics*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::SharedStatics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
