// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextReader/System.IO.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA1B38
  class TextReader::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.IO.TextReader/System.IO.<>c <>9
    static System::IO::TextReader::$$c* _get_$$9();
    // Set static field: static public readonly System.IO.TextReader/System.IO.<>c <>9
    static void _set_$$9(System::IO::TextReader::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x1833DA0
    static void _cctor();
    // System.String <.cctor>b__22_0(System.Object state)
    // Offset: 0x1833E0C
    ::Il2CppString* $_cctor$b__22_0(::Il2CppObject* state);
    // System.Int32 <.cctor>b__22_1(System.Object state)
    // Offset: 0x1833EC4
    int $_cctor$b__22_1(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x1833E04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextReader::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextReader::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextReader::$$c*, creationType>()));
    }
  }; // System.IO.TextReader/System.IO.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextReader::$$c*, "System.IO", "TextReader/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::TextReader::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::TextReader::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::$$c::$_cctor$b__22_0
// Il2CppName: <.cctor>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::TextReader::$$c::*)(::Il2CppObject*)>(&System::IO::TextReader::$$c::$_cctor$b__22_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::$$c*), "<.cctor>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::$$c::$_cctor$b__22_1
// Il2CppName: <.cctor>b__22_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::TextReader::$$c::*)(::Il2CppObject*)>(&System::IO::TextReader::$$c::$_cctor$b__22_1)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::$$c*), "<.cctor>b__22_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
