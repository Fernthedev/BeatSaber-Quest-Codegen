// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.IConstraint
#include "NUnit/Framework/Constraints/IConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintBuilder
  class ConstraintBuilder;
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.Constraint
  // [TokenAttribute] Offset: FFFFFFFF
  class Constraint : public ::Il2CppObject/*, public NUnit::Framework::Constraints::IConstraint*/ {
    public:
    // private System.Lazy`1<System.String> _displayName
    // Size: 0x8
    // Offset: 0x10
    System::Lazy_1<::Il2CppString*>* displayName;
    // Field size check
    static_assert(sizeof(System::Lazy_1<::Il2CppString*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE232D8
    // private System.String <Description>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Description;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE23314
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppObject*>* Arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE23350
    // private NUnit.Framework.Constraints.ConstraintBuilder <Builder>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Constraints::ConstraintBuilder* Builder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ConstraintBuilder*) == 0x8);
    // Creating value type constructor for type: Constraint
    Constraint(System::Lazy_1<::Il2CppString*>* displayName_ = {}, ::Il2CppString* Description_ = {}, ::Array<::Il2CppObject*>* Arguments_ = {}, NUnit::Framework::Constraints::ConstraintBuilder* Builder_ = {}) noexcept : displayName{displayName_}, Description{Description_}, Arguments{Arguments_}, Builder{Builder_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Constraints::IConstraint
    operator NUnit::Framework::Constraints::IConstraint() noexcept {
      return *reinterpret_cast<NUnit::Framework::Constraints::IConstraint*>(this);
    }
    // Get instance field reference: private System.Lazy`1<System.String> _displayName
    System::Lazy_1<::Il2CppString*>*& dyn__displayName();
    // Get instance field reference: private System.String <Description>k__BackingField
    ::Il2CppString*& dyn_$Description$k__BackingField();
    // Get instance field reference: private System.Object[] <Arguments>k__BackingField
    ::Array<::Il2CppObject*>*& dyn_$Arguments$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Constraints.ConstraintBuilder <Builder>k__BackingField
    NUnit::Framework::Constraints::ConstraintBuilder*& dyn_$Builder$k__BackingField();
    // public System.String get_DisplayName()
    // Offset: 0x1765614
    ::Il2CppString* get_DisplayName();
    // public System.String get_Description()
    // Offset: 0x176566C
    ::Il2CppString* get_Description();
    // protected System.Void set_Description(System.String value)
    // Offset: 0x1765674
    void set_Description(::Il2CppString* value);
    // public System.Object[] get_Arguments()
    // Offset: 0x176567C
    ::Array<::Il2CppObject*>* get_Arguments();
    // private System.Void set_Arguments(System.Object[] value)
    // Offset: 0x1765684
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // public NUnit.Framework.Constraints.ConstraintBuilder get_Builder()
    // Offset: 0x176568C
    NUnit::Framework::Constraints::ConstraintBuilder* get_Builder();
    // public System.Void set_Builder(NUnit.Framework.Constraints.ConstraintBuilder value)
    // Offset: 0x1765694
    void set_Builder(NUnit::Framework::Constraints::ConstraintBuilder* value);
    // protected System.Void .ctor(params System.Object[] args)
    // Offset: 0x1765224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Constraint* New_ctor(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::Constraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Constraint*, creationType>(args)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Constraint* New_ctor(std::initializer_list<::Il2CppObject*> args) {
      return New_ctor<creationType>(::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static Constraint* New_ctor(TParams&&... args) {
      return New_ctor<creationType>({args...});
    }
    // public NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
    // protected System.String GetStringRepresentation()
    // Offset: 0x176571C
    ::Il2CppString* GetStringRepresentation();
    // static private System.String _displayable(System.Object o)
    // Offset: 0x1765870
    static ::Il2CppString* _displayable(::Il2CppObject* o);
    // private NUnit.Framework.Constraints.IConstraint NUnit.Framework.Constraints.IResolveConstraint.Resolve()
    // Offset: 0x176599C
    NUnit::Framework::Constraints::IConstraint* NUnit_Framework_Constraints_IResolveConstraint_Resolve();
    // private System.String <.ctor>b__1_0()
    // Offset: 0x1765A78
    ::Il2CppString* $_ctor$b__1_0();
    // public override System.String ToString()
    // Offset: 0x176569C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Constraints.Constraint
  #pragma pack(pop)
  static check_size<sizeof(Constraint), 40 + sizeof(NUnit::Framework::Constraints::ConstraintBuilder*)> __NUnit_Framework_Constraints_ConstraintSizeCheck;
  static_assert(sizeof(Constraint) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::Constraint*, "NUnit.Framework.Constraints", "Constraint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::Constraint::*)()>(&NUnit::Framework::Constraints::Constraint::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::Constraint::*)()>(&NUnit::Framework::Constraints::Constraint::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::set_Description
// Il2CppName: set_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::Constraint::*)(::Il2CppString*)>(&NUnit::Framework::Constraints::Constraint::set_Description)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "set_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::get_Arguments
// Il2CppName: get_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (NUnit::Framework::Constraints::Constraint::*)()>(&NUnit::Framework::Constraints::Constraint::get_Arguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "get_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::set_Arguments
// Il2CppName: set_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::Constraint::*)(::Array<::Il2CppObject*>*)>(&NUnit::Framework::Constraints::Constraint::set_Arguments)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "set_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::get_Builder
// Il2CppName: get_Builder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ConstraintBuilder* (NUnit::Framework::Constraints::Constraint::*)()>(&NUnit::Framework::Constraints::Constraint::get_Builder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "get_Builder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::set_Builder
// Il2CppName: set_Builder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::Constraint::*)(NUnit::Framework::Constraints::ConstraintBuilder*)>(&NUnit::Framework::Constraints::Constraint::set_Builder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "ConstraintBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "set_Builder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::ApplyTo
// Il2CppName: ApplyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ConstraintResult* (NUnit::Framework::Constraints::Constraint::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::Constraint::ApplyTo)> {
  static const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "ApplyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::GetStringRepresentation
// Il2CppName: GetStringRepresentation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::Constraint::*)()>(&NUnit::Framework::Constraints::Constraint::GetStringRepresentation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "GetStringRepresentation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::_displayable
// Il2CppName: _displayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::Constraint::_displayable)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "_displayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::NUnit_Framework_Constraints_IResolveConstraint_Resolve
// Il2CppName: NUnit.Framework.Constraints.IResolveConstraint.Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::IConstraint* (NUnit::Framework::Constraints::Constraint::*)()>(&NUnit::Framework::Constraints::Constraint::NUnit_Framework_Constraints_IResolveConstraint_Resolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "NUnit.Framework.Constraints.IResolveConstraint.Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::$_ctor$b__1_0
// Il2CppName: <.ctor>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::Constraint::*)()>(&NUnit::Framework::Constraints::Constraint::$_ctor$b__1_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "<.ctor>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::Constraint::*)()>(&NUnit::Framework::Constraints::Constraint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Constraint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
