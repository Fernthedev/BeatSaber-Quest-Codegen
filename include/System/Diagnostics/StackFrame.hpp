// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.StackFrame
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA5F64
  // [MonoTODOAttribute] Offset: DA5F64
  class StackFrame : public ::Il2CppObject {
    public:
    // private System.Int32 ilOffset
    // Size: 0x4
    // Offset: 0x10
    int ilOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nativeOffset
    // Size: 0x4
    // Offset: 0x14
    int nativeOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 methodAddress
    // Size: 0x8
    // Offset: 0x18
    int64_t methodAddress;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.UInt32 methodIndex
    // Size: 0x4
    // Offset: 0x20
    uint methodIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: methodIndex and: methodBase
    char __padding3[0x4] = {};
    // private System.Reflection.MethodBase methodBase
    // Size: 0x8
    // Offset: 0x28
    System::Reflection::MethodBase* methodBase;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodBase*) == 0x8);
    // private System.String fileName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* fileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x38
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 columnNumber
    // Size: 0x4
    // Offset: 0x3C
    int columnNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String internalMethodName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* internalMethodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: StackFrame
    StackFrame(int ilOffset_ = {}, int nativeOffset_ = {}, int64_t methodAddress_ = {}, uint methodIndex_ = {}, System::Reflection::MethodBase* methodBase_ = {}, ::Il2CppString* fileName_ = {}, int lineNumber_ = {}, int columnNumber_ = {}, ::Il2CppString* internalMethodName_ = {}) noexcept : ilOffset{ilOffset_}, nativeOffset{nativeOffset_}, methodAddress{methodAddress_}, methodIndex{methodIndex_}, methodBase{methodBase_}, fileName{fileName_}, lineNumber{lineNumber_}, columnNumber{columnNumber_}, internalMethodName{internalMethodName_} {}
    // static field const value: static public System.Int32 OFFSET_UNKNOWN
    static constexpr const int OFFSET_UNKNOWN = -1;
    // Get static field: static public System.Int32 OFFSET_UNKNOWN
    static int _get_OFFSET_UNKNOWN();
    // Set static field: static public System.Int32 OFFSET_UNKNOWN
    static void _set_OFFSET_UNKNOWN(int value);
    // Get instance field reference: private System.Int32 ilOffset
    int& dyn_ilOffset();
    // Get instance field reference: private System.Int32 nativeOffset
    int& dyn_nativeOffset();
    // Get instance field reference: private System.Int64 methodAddress
    int64_t& dyn_methodAddress();
    // Get instance field reference: private System.UInt32 methodIndex
    uint& dyn_methodIndex();
    // Get instance field reference: private System.Reflection.MethodBase methodBase
    System::Reflection::MethodBase*& dyn_methodBase();
    // Get instance field reference: private System.String fileName
    ::Il2CppString*& dyn_fileName();
    // Get instance field reference: private System.Int32 lineNumber
    int& dyn_lineNumber();
    // Get instance field reference: private System.Int32 columnNumber
    int& dyn_columnNumber();
    // Get instance field reference: private System.String internalMethodName
    ::Il2CppString*& dyn_internalMethodName();
    // public System.Void .ctor(System.Int32 skipFrames, System.Boolean fNeedFileInfo)
    // Offset: 0x1B65EB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackFrame* New_ctor(int skipFrames, bool fNeedFileInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::StackFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackFrame*, creationType>(skipFrames, fNeedFileInfo)));
    }
    // static private System.Boolean get_frame_info(System.Int32 skip, System.Boolean needFileInfo, out System.Reflection.MethodBase method, out System.Int32 iloffset, out System.Int32 native_offset, out System.String file, out System.Int32 line, out System.Int32 column)
    // Offset: 0x1B65E54
    static bool get_frame_info(int skip, bool needFileInfo, ByRef<System::Reflection::MethodBase*> method, ByRef<int> iloffset, ByRef<int> native_offset, ByRef<::Il2CppString*> file, ByRef<int> line, ByRef<int> column);
    // public System.Int32 GetFileLineNumber()
    // Offset: 0x1B65F24
    int GetFileLineNumber();
    // public System.String GetFileName()
    // Offset: 0x1B65F2C
    ::Il2CppString* GetFileName();
    // System.String GetSecureFileName()
    // Offset: 0x1B65F34
    ::Il2CppString* GetSecureFileName();
    // public System.Int32 GetILOffset()
    // Offset: 0x1B66010
    int GetILOffset();
    // public System.Reflection.MethodBase GetMethod()
    // Offset: 0x1B66018
    System::Reflection::MethodBase* GetMethod();
    // public System.Int32 GetNativeOffset()
    // Offset: 0x1B66020
    int GetNativeOffset();
    // System.Int64 GetMethodAddress()
    // Offset: 0x1B66028
    int64_t GetMethodAddress();
    // System.UInt32 GetMethodIndex()
    // Offset: 0x1B66030
    uint GetMethodIndex();
    // System.String GetInternalMethodName()
    // Offset: 0x1B66038
    ::Il2CppString* GetInternalMethodName();
    // public System.Void .ctor()
    // Offset: 0x1B65E5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::StackFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackFrame*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1B66040
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Diagnostics.StackFrame
  #pragma pack(pop)
  static check_size<sizeof(StackFrame), 64 + sizeof(::Il2CppString*)> __System_Diagnostics_StackFrameSizeCheck;
  static_assert(sizeof(StackFrame) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::StackFrame*, "System.Diagnostics", "StackFrame");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::get_frame_info
// Il2CppName: get_frame_info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, bool, ByRef<System::Reflection::MethodBase*>, ByRef<int>, ByRef<int>, ByRef<::Il2CppString*>, ByRef<int>, ByRef<int>)>(&System::Diagnostics::StackFrame::get_frame_info)> {
  static const MethodInfo* get() {
    static auto* skip = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* needFileInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->this_arg;
    static auto* iloffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* native_offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* file = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "get_frame_info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skip, needFileInfo, method, iloffset, native_offset, file, line, column});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetFileLineNumber
// Il2CppName: GetFileLineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetFileLineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetFileLineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetFileName
// Il2CppName: GetFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetFileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetSecureFileName
// Il2CppName: GetSecureFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetSecureFileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetSecureFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetILOffset
// Il2CppName: GetILOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetILOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetILOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetMethod
// Il2CppName: GetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase* (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetNativeOffset
// Il2CppName: GetNativeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetNativeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetNativeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetMethodAddress
// Il2CppName: GetMethodAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetMethodAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetMethodAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetMethodIndex
// Il2CppName: GetMethodIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetMethodIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetMethodIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::GetInternalMethodName
// Il2CppName: GetInternalMethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::GetInternalMethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "GetInternalMethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::StackFrame::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Diagnostics::StackFrame::*)()>(&System::Diagnostics::StackFrame::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackFrame*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
