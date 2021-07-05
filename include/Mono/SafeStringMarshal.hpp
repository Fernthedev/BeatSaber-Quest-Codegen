// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.SafeStringMarshal
  struct SafeStringMarshal/*, public System::ValueType, public System::IDisposable*/ {
    public:
    // private readonly System.String str
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.IntPtr marshaled_string
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr marshaled_string;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: SafeStringMarshal
    constexpr SafeStringMarshal(::Il2CppString* str_ = {}, System::IntPtr marshaled_string_ = {}) noexcept : str{str_}, marshaled_string{marshaled_string_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static public System.IntPtr StringToUtf8(System.String str)
    // Offset: 0x1A65594
    static System::IntPtr StringToUtf8(::Il2CppString* str);
    // static public System.Void GFree(System.IntPtr ptr)
    // Offset: 0x1A65598
    static void GFree(System::IntPtr ptr);
    // public System.Void .ctor(System.String str)
    // Offset: 0xF03DD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    SafeStringMarshal(::Il2CppString* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::SafeStringMarshal::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(str)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, str);
    }
    // public System.IntPtr get_Value()
    // Offset: 0xF03E24
    System::IntPtr get_Value();
    // public System.Void Dispose()
    // Offset: 0xF03E2C
    void Dispose();
  }; // Mono.SafeStringMarshal
  #pragma pack(pop)
  static check_size<sizeof(SafeStringMarshal), 8 + sizeof(System::IntPtr)> __Mono_SafeStringMarshalSizeCheck;
  static_assert(sizeof(SafeStringMarshal) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::SafeStringMarshal, "Mono", "SafeStringMarshal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::SafeStringMarshal::StringToUtf8
// Il2CppName: StringToUtf8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Il2CppString*)>(&Mono::SafeStringMarshal::StringToUtf8)> {
  const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "StringToUtf8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::GFree
// Il2CppName: GFree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&Mono::SafeStringMarshal::GFree)> {
  const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "GFree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::SafeStringMarshal
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::SafeStringMarshal::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::SafeStringMarshal::*)()>(&Mono::SafeStringMarshal::get_Value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SafeStringMarshal::*)()>(&Mono::SafeStringMarshal::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
