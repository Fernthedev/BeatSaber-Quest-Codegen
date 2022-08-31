// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Version);
DEFINE_IL2CPP_ARG_TYPE(::System::Version*, "System", "Version");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Version
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 103FC54
  class Version : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::IComparable_1<::System::Version*>, public ::System::IEquatable_1<::System::Version*>, public ::System::IComparable*/ {
    public:
    // Nested type: ::System::Version::ParseFailureKind
    struct ParseFailureKind;
    // Nested type: ::System::Version::VersionResult
    struct VersionResult;
    public:
    // private System.Int32 _Major
    // Size: 0x4
    // Offset: 0x10
    int Major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _Minor
    // Size: 0x4
    // Offset: 0x14
    int Minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _Build
    // Size: 0x4
    // Offset: 0x18
    int Build;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _Revision
    // Size: 0x4
    // Offset: 0x1C
    int Revision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::Version*>
    operator ::System::IComparable_1<::System::Version*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::Version*>*>(this);
    }
    // Creating interface conversion operator: i_Version
    inline ::System::IComparable_1<::System::Version*>* i_Version() noexcept {
      return reinterpret_cast<::System::IComparable_1<::System::Version*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Version*>
    operator ::System::IEquatable_1<::System::Version*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Version*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: i_IComparable
    inline ::System::IComparable* i_IComparable() noexcept {
      return reinterpret_cast<::System::IComparable*>(this);
    }
    // Get static field: static private readonly System.Char[] SeparatorsArray
    static ::ArrayW<::Il2CppChar> _get_SeparatorsArray();
    // Set static field: static private readonly System.Char[] SeparatorsArray
    static void _set_SeparatorsArray(::ArrayW<::Il2CppChar> value);
    // static field const value: static private System.Int32 ZERO_CHAR_VALUE
    static constexpr const int ZERO_CHAR_VALUE = 48;
    // Get static field: static private System.Int32 ZERO_CHAR_VALUE
    static int _get_ZERO_CHAR_VALUE();
    // Set static field: static private System.Int32 ZERO_CHAR_VALUE
    static void _set_ZERO_CHAR_VALUE(int value);
    // Get instance field reference: private System.Int32 _Major
    [[deprecated("Use field access instead!")]] int& dyn__Major();
    // Get instance field reference: private System.Int32 _Minor
    [[deprecated("Use field access instead!")]] int& dyn__Minor();
    // Get instance field reference: private System.Int32 _Build
    [[deprecated("Use field access instead!")]] int& dyn__Build();
    // Get instance field reference: private System.Int32 _Revision
    [[deprecated("Use field access instead!")]] int& dyn__Revision();
    // public System.Int32 get_Major()
    // Offset: 0x29F4B00
    int get_Major();
    // public System.Int32 get_Minor()
    // Offset: 0x29F4B08
    int get_Minor();
    // public System.Int32 get_Build()
    // Offset: 0x29F4B10
    int get_Build();
    // public System.Int32 get_Revision()
    // Offset: 0x29F4B18
    int get_Revision();
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build, System.Int32 revision)
    // Offset: 0x29F4534
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(int major, int minor, int build, int revision) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(major, minor, build, revision)));
    }
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build)
    // Offset: 0x29F46C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(int major, int minor, int build) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(major, minor, build)));
    }
    // public System.Void .ctor(System.Int32 major, System.Int32 minor)
    // Offset: 0x29F4814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(int major, int minor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(major, minor)));
    }
    // public System.Void .ctor(System.String version)
    // Offset: 0x29F4918
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(::StringW version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(version)));
    }
    // static private System.Void .cctor()
    // Offset: 0x29F5D40
    static void _cctor();
    // public System.Object Clone()
    // Offset: 0x29F4B20
    ::Il2CppObject* Clone();
    // public System.Int32 CompareTo(System.Object version)
    // Offset: 0x29F4BB4
    int CompareTo(::Il2CppObject* version);
    // public System.Int32 CompareTo(System.Version value)
    // Offset: 0x29F4D00
    int CompareTo(::System::Version* value);
    // public System.Boolean Equals(System.Version obj)
    // Offset: 0x29F4EBC
    bool Equals(::System::Version* obj);
    // public System.String ToString(System.Int32 fieldCount)
    // Offset: 0x29F4FCC
    ::StringW ToString(int fieldCount);
    // static private System.Void AppendPositiveNumber(System.Int32 num, System.Text.StringBuilder sb)
    // Offset: 0x29F5388
    static void AppendPositiveNumber(int num, ::System::Text::StringBuilder* sb);
    // static public System.Version Parse(System.String input)
    // Offset: 0x29F49C8
    static ::System::Version* Parse(::StringW input);
    // static private System.Boolean TryParseVersion(System.String version, ref System.Version/System.VersionResult result)
    // Offset: 0x29F5420
    static bool TryParseVersion(::StringW version, ByRef<::System::Version::VersionResult> result);
    // static private System.Boolean TryParseComponent(System.String component, System.String componentName, ref System.Version/System.VersionResult result, out System.Int32 parsedComponent)
    // Offset: 0x29F593C
    static bool TryParseComponent(::StringW component, ::StringW componentName, ByRef<::System::Version::VersionResult> result, ByRef<int> parsedComponent);
    // public System.Void .ctor()
    // Offset: 0x29F4AD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x29F4DE0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29F4F88
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x29F4FA4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Version
  #pragma pack(pop)
  static check_size<sizeof(Version), 28 + sizeof(int)> __System_VersionSizeCheck;
  static_assert(sizeof(Version) == 0x20);
  // static public System.Boolean op_Equality(System.Version v1, System.Version v2)
  // Offset: 0x29F4CEC
  bool operator ==(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_Inequality(System.Version v1, System.Version v2)
  // Offset: 0x29F5A88
  bool operator !=(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_LessThan(System.Version v1, System.Version v2)
  // Offset: 0x29F5B1C
  bool operator <(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_LessThanOrEqual(System.Version v1, System.Version v2)
  // Offset: 0x29F5BB8
  bool operator <=(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_GreaterThan(System.Version v1, System.Version v2)
  // Offset: 0x29F5C58
  bool operator >(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_GreaterThanOrEqual(System.Version v1, System.Version v2)
  // Offset: 0x29F5CCC
  bool operator >=(::System::Version* v1, ::System::Version& v2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Version::get_Major
// Il2CppName: get_Major
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_Major)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_Major", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::get_Minor
// Il2CppName: get_Minor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_Minor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_Minor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::get_Build
// Il2CppName: get_Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_Build)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::get_Revision
// Il2CppName: get_Revision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_Revision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_Revision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Version::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Version::*)()>(&System::Version::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)(::Il2CppObject*)>(&System::Version::CompareTo)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: System::Version::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)(::System::Version*)>(&System::Version::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Version::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Version::*)(::System::Version*)>(&System::Version::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Version::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Version::*)(int)>(&System::Version::ToString)> {
  static const MethodInfo* get() {
    static auto* fieldCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldCount});
  }
};
// Writing MetadataGetter for method: System::Version::AppendPositiveNumber
// Il2CppName: AppendPositiveNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::System::Text::StringBuilder*)>(&System::Version::AppendPositiveNumber)> {
  static const MethodInfo* get() {
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "AppendPositiveNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{num, sb});
  }
};
// Writing MetadataGetter for method: System::Version::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::StringW)>(&System::Version::Parse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Version::TryParseVersion
// Il2CppName: TryParseVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Version::VersionResult>)>(&System::Version::TryParseVersion)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Version/VersionResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "TryParseVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, result});
  }
};
// Writing MetadataGetter for method: System::Version::TryParseComponent
// Il2CppName: TryParseComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<::System::Version::VersionResult>, ByRef<int>)>(&System::Version::TryParseComponent)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* componentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Version/VersionResult")->this_arg;
    static auto* parsedComponent = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "TryParseComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, componentName, result, parsedComponent});
  }
};
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Version::*)(::Il2CppObject*)>(&System::Version::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Version::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Version::*)()>(&System::Version::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
