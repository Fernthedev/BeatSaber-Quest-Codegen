// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Test
  class Test : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITest, public System::IComparable*/ {
    public:
    // protected System.Reflection.MethodInfo[] setUpMethods
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Reflection::MethodInfo*>* setUpMethods;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::MethodInfo*>*) == 0x8);
    // protected System.Reflection.MethodInfo[] tearDownMethods
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Reflection::MethodInfo*>* tearDownMethods;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::MethodInfo*>*) == 0x8);
    // protected NUnit.Framework.Interfaces.ITypeInfo DeclaringTypeInfo
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::Interfaces::ITypeInfo* DeclaringTypeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // private NUnit.Framework.Interfaces.IMethodInfo _method
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::IMethodInfo* method;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IMethodInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE05754
    // [DebuggerBrowsableAttribute] Offset: 0xE05754
    // private System.String <Id>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* Id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE05790
    // [DebuggerBrowsableAttribute] Offset: 0xE05790
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE057CC
    // [CompilerGeneratedAttribute] Offset: 0xE057CC
    // private System.String <FullName>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* FullName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05808
    // [CompilerGeneratedAttribute] Offset: 0xE05808
    // private NUnit.Framework.Interfaces.ITypeInfo <TypeInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    NUnit::Framework::Interfaces::ITypeInfo* TypeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05844
    // [CompilerGeneratedAttribute] Offset: 0xE05844
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    NUnit::Framework::Interfaces::RunState RunState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::RunState) == 0x4);
    // Padding between fields: RunState and: Properties
    char __padding8[0x4] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xE05880
    // [CompilerGeneratedAttribute] Offset: 0xE05880
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IPropertyBag*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE058BC
    // [CompilerGeneratedAttribute] Offset: 0xE058BC
    // private NUnit.Framework.Interfaces.ITest <Parent>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    NUnit::Framework::Interfaces::ITest* Parent;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITest*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE058F8
    // [CompilerGeneratedAttribute] Offset: 0xE058F8
    // private System.Object <Fixture>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppObject* Fixture;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05970
    // [CompilerGeneratedAttribute] Offset: 0xE05970
    // private System.Int32 <Seed>k__BackingField
    // Size: 0x4
    // Offset: 0x70
    int Seed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE059AC
    // [CompilerGeneratedAttribute] Offset: 0xE059AC
    // private System.Boolean <RequiresThread>k__BackingField
    // Size: 0x1
    // Offset: 0x74
    bool RequiresThread;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Test
    Test(::Array<System::Reflection::MethodInfo*>* setUpMethods_ = {}, ::Array<System::Reflection::MethodInfo*>* tearDownMethods_ = {}, NUnit::Framework::Interfaces::ITypeInfo* DeclaringTypeInfo_ = {}, NUnit::Framework::Interfaces::IMethodInfo* method_ = {}, ::Il2CppString* Id_ = {}, ::Il2CppString* Name_ = {}, ::Il2CppString* FullName_ = {}, NUnit::Framework::Interfaces::ITypeInfo* TypeInfo_ = {}, NUnit::Framework::Interfaces::RunState RunState_ = {}, NUnit::Framework::Interfaces::IPropertyBag* Properties_ = {}, NUnit::Framework::Interfaces::ITest* Parent_ = {}, ::Il2CppObject* Fixture_ = {}, int Seed_ = {}, bool RequiresThread_ = {}) noexcept : setUpMethods{setUpMethods_}, tearDownMethods{tearDownMethods_}, DeclaringTypeInfo{DeclaringTypeInfo_}, method{method_}, Id{Id_}, Name{Name_}, FullName{FullName_}, TypeInfo{TypeInfo_}, RunState{RunState_}, Properties{Properties_}, Parent{Parent_}, Fixture{Fixture_}, Seed{Seed_}, RequiresThread{RequiresThread_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITest
    operator NUnit::Framework::Interfaces::ITest() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITest*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Get static field: static private System.Int32 _nextID
    static int _get__nextID();
    // Set static field: static private System.Int32 _nextID
    static void _set__nextID(int value);
    // [CompilerGeneratedAttribute] Offset: 0xE05934
    // [DebuggerBrowsableAttribute] Offset: 0xE05934
    // Get static field: static private System.String <IdPrefix>k__BackingField
    static ::Il2CppString* _get_$IdPrefix$k__BackingField();
    // Set static field: static private System.String <IdPrefix>k__BackingField
    static void _set_$IdPrefix$k__BackingField(::Il2CppString* value);
    // protected System.Void .ctor(System.String name)
    // Offset: 0x22AE014
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Test::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test*, creationType>(name)));
    }
    // protected System.Void .ctor(System.String pathName, System.String name)
    // Offset: 0x22AE128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test* New_ctor(::Il2CppString* pathName, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Test::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test*, creationType>(pathName, name)));
    }
    // protected System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x22AE1C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* typeInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Test::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test*, creationType>(typeInfo)));
    }
    // protected System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method)
    // Offset: 0x22AE348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Test::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test*, creationType>(method)));
    }
    // private System.Void Initialize(System.String name)
    // Offset: 0x22AE08C
    void Initialize(::Il2CppString* name);
    // static private System.String GetNextId()
    // Offset: 0x22AE578
    static ::Il2CppString* GetNextId();
    // public System.String get_Id()
    // Offset: 0x22AE654
    ::Il2CppString* get_Id();
    // public System.Void set_Id(System.String value)
    // Offset: 0x22AE65C
    void set_Id(::Il2CppString* value);
    // public System.String get_Name()
    // Offset: 0x22AE664
    ::Il2CppString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x22AE66C
    void set_Name(::Il2CppString* value);
    // public System.String get_FullName()
    // Offset: 0x22AE674
    ::Il2CppString* get_FullName();
    // public System.Void set_FullName(System.String value)
    // Offset: 0x22AE67C
    void set_FullName(::Il2CppString* value);
    // public System.String get_ClassName()
    // Offset: 0x22AE684
    ::Il2CppString* get_ClassName();
    // public System.String get_MethodName()
    // Offset: 0x22AE8E0
    ::Il2CppString* get_MethodName();
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0x22AE8E8
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // private System.Void set_TypeInfo(NUnit.Framework.Interfaces.ITypeInfo value)
    // Offset: 0x22AE8F0
    void set_TypeInfo(NUnit::Framework::Interfaces::ITypeInfo* value);
    // public NUnit.Framework.Interfaces.IMethodInfo get_Method()
    // Offset: 0x22AC408
    NUnit::Framework::Interfaces::IMethodInfo* get_Method();
    // public System.Void set_Method(NUnit.Framework.Interfaces.IMethodInfo value)
    // Offset: 0x22AC318
    void set_Method(NUnit::Framework::Interfaces::IMethodInfo* value);
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x22AE8F8
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Void set_RunState(NUnit.Framework.Interfaces.RunState value)
    // Offset: 0x22AE900
    void set_RunState(NUnit::Framework::Interfaces::RunState value);
    // public System.String get_XmlElementName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_XmlElementName();
    // public System.String get_TestType()
    // Offset: 0x22AE908
    ::Il2CppString* get_TestType();
    // public System.Int32 get_TestCaseCount()
    // Offset: 0x22AE930
    int get_TestCaseCount();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x22AE938
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // private System.Void set_Properties(NUnit.Framework.Interfaces.IPropertyBag value)
    // Offset: 0x22AE940
    void set_Properties(NUnit::Framework::Interfaces::IPropertyBag* value);
    // public System.Boolean get_IsSuite()
    // Offset: 0x22AE948
    bool get_IsSuite();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    bool get_HasChildren();
    // public NUnit.Framework.Interfaces.ITest get_Parent()
    // Offset: 0x22AE9C8
    NUnit::Framework::Interfaces::ITest* get_Parent();
    // public System.Void set_Parent(NUnit.Framework.Interfaces.ITest value)
    // Offset: 0x22AE9D0
    void set_Parent(NUnit::Framework::Interfaces::ITest* value);
    // public System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public System.Object get_Fixture()
    // Offset: 0x22AE9D8
    ::Il2CppObject* get_Fixture();
    // public System.Void set_Fixture(System.Object value)
    // Offset: 0x22AE9E0
    void set_Fixture(::Il2CppObject* value);
    // static public System.String get_IdPrefix()
    // Offset: 0x22AE9E8
    static ::Il2CppString* get_IdPrefix();
    // public System.Int32 get_Seed()
    // Offset: 0x22AEA50
    int get_Seed();
    // public System.Void set_Seed(System.Int32 value)
    // Offset: 0x22AEA58
    void set_Seed(int value);
    // public NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public System.Void ApplyAttributesToTest(System.Reflection.ICustomAttributeProvider provider)
    // Offset: 0x22AEA60
    void ApplyAttributesToTest(System::Reflection::ICustomAttributeProvider* provider);
    // protected System.Void PopulateTestNode(NUnit.Framework.Interfaces.TNode thisNode, System.Boolean recursive)
    // Offset: 0x22AEC4C
    void PopulateTestNode(NUnit::Framework::Interfaces::TNode* thisNode, bool recursive);
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x22AEF58
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x22AEFE4
    int CompareTo(::Il2CppObject* obj);
    // static private System.Void .cctor()
    // Offset: 0x22AF098
    static void _cctor();
  }; // NUnit.Framework.Internal.Test
  #pragma pack(pop)
  static check_size<sizeof(Test), 116 + sizeof(bool)> __NUnit_Framework_Internal_TestSizeCheck;
  static_assert(sizeof(Test) == 0x75);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Test*, "NUnit.Framework.Internal", "Test");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Test::Initialize)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::GetNextId
// Il2CppName: GetNextId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&NUnit::Framework::Internal::Test::GetNextId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "GetNextId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_Id)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_Id
// Il2CppName: set_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Test::set_Id)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Test::set_Name)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_FullName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_FullName
// Il2CppName: set_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Test::set_FullName)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_ClassName
// Il2CppName: get_ClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_ClassName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_ClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_MethodName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_TypeInfo
// Il2CppName: get_TypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_TypeInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_TypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_TypeInfo
// Il2CppName: set_TypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(NUnit::Framework::Interfaces::ITypeInfo*)>(&NUnit::Framework::Internal::Test::set_TypeInfo)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITypeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_TypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::IMethodInfo* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_Method)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(NUnit::Framework::Interfaces::IMethodInfo*)>(&NUnit::Framework::Internal::Test::set_Method)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IMethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_RunState
// Il2CppName: get_RunState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::RunState (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_RunState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_RunState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_RunState
// Il2CppName: set_RunState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(NUnit::Framework::Interfaces::RunState)>(&NUnit::Framework::Internal::Test::set_RunState)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "RunState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_RunState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_XmlElementName
// Il2CppName: get_XmlElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_XmlElementName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_XmlElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_TestType
// Il2CppName: get_TestType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_TestType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_TestType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_TestCaseCount
// Il2CppName: get_TestCaseCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_TestCaseCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_TestCaseCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::IPropertyBag* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_Properties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_Properties
// Il2CppName: set_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(NUnit::Framework::Interfaces::IPropertyBag*)>(&NUnit::Framework::Internal::Test::set_Properties)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IPropertyBag")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_IsSuite
// Il2CppName: get_IsSuite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_IsSuite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_IsSuite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_HasChildren
// Il2CppName: get_HasChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_HasChildren)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_HasChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_Parent
// Il2CppName: get_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITest* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_Parent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_Parent
// Il2CppName: set_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Test::set_Parent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_Tests
// Il2CppName: get_Tests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_Tests)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_Tests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_Fixture
// Il2CppName: get_Fixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_Fixture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_Fixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_Fixture
// Il2CppName: set_Fixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(::Il2CppObject*)>(&NUnit::Framework::Internal::Test::set_Fixture)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_Fixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_IdPrefix
// Il2CppName: get_IdPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&NUnit::Framework::Internal::Test::get_IdPrefix)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_IdPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::get_Seed
// Il2CppName: get_Seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::get_Seed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "get_Seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::set_Seed
// Il2CppName: set_Seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(int)>(&NUnit::Framework::Internal::Test::set_Seed)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "set_Seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::MakeTestResult
// Il2CppName: MakeTestResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::Test::*)()>(&NUnit::Framework::Internal::Test::MakeTestResult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "MakeTestResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::ApplyAttributesToTest
// Il2CppName: ApplyAttributesToTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(System::Reflection::ICustomAttributeProvider*)>(&NUnit::Framework::Internal::Test::ApplyAttributesToTest)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "ApplyAttributesToTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::PopulateTestNode
// Il2CppName: PopulateTestNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Test::*)(NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::Test::PopulateTestNode)> {
  const MethodInfo* get() {
    static auto* thisNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "PopulateTestNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thisNode, recursive});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::Test::*)(bool)>(&NUnit::Framework::Internal::Test::ToXml)> {
  const MethodInfo* get() {
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recursive});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::Test::*)(NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::Test::AddToXml)> {
  const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::Test::*)(::Il2CppObject*)>(&NUnit::Framework::Internal::Test::CompareTo)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Test::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::Test::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Test*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
