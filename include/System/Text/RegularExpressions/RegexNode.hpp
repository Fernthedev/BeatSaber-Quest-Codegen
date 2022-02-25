// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexNode
  class RegexNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Text::RegularExpressions::RegexNode);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexNode*, "System.Text.RegularExpressions", "RegexNode");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexNode
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexNode : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Int32 _type
    // Size: 0x4
    // Offset: 0x10
    int type;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: type and: children
    char __padding0[0x4] = {};
    // System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode> _children
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexNode*>* children;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexNode*>*) == 0x8);
    // System.String _str
    // Size: 0x8
    // Offset: 0x20
    ::StringW str;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Char _ch
    // Size: 0x2
    // Offset: 0x28
    ::Il2CppChar ch;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: ch and: m
    char __padding3[0x2] = {};
    // System.Int32 _m
    // Size: 0x4
    // Offset: 0x2C
    int m;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _n
    // Size: 0x4
    // Offset: 0x30
    int n;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Text.RegularExpressions.RegexOptions _options
    // Size: 0x4
    // Offset: 0x34
    System::Text::RegularExpressions::RegexOptions options;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexOptions) == 0x4);
    // System.Text.RegularExpressions.RegexNode _next
    // Size: 0x8
    // Offset: 0x38
    System::Text::RegularExpressions::RegexNode* next;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexNode*) == 0x8);
    public:
    // Get instance field reference: System.Int32 _type
    int& dyn__type();
    // Get instance field reference: System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode> _children
    System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexNode*>*& dyn__children();
    // Get instance field reference: System.String _str
    ::StringW& dyn__str();
    // Get instance field reference: System.Char _ch
    ::Il2CppChar& dyn__ch();
    // Get instance field reference: System.Int32 _m
    int& dyn__m();
    // Get instance field reference: System.Int32 _n
    int& dyn__n();
    // Get instance field reference: System.Text.RegularExpressions.RegexOptions _options
    System::Text::RegularExpressions::RegexOptions& dyn__options();
    // Get instance field reference: System.Text.RegularExpressions.RegexNode _next
    System::Text::RegularExpressions::RegexNode*& dyn__next();
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options)
    // Offset: 0x1EA1C7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexNode*, creationType>(type, options)));
    }
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options, System.Char ch)
    // Offset: 0x1EA1CB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options, ::Il2CppChar ch) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexNode*, creationType>(type, options, ch)));
    }
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options, System.String str)
    // Offset: 0x1EA1CFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options, ::StringW str) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexNode*, creationType>(type, options, str)));
    }
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options, System.Int32 m)
    // Offset: 0x1EA1D40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options, int m) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexNode*, creationType>(type, options, m)));
    }
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options, System.Int32 m, System.Int32 n)
    // Offset: 0x1EA1D84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options, int m, int n) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexNode*, creationType>(type, options, m, n)));
    }
    // System.Boolean UseOptionR()
    // Offset: 0x1EA1DD4
    bool UseOptionR();
    // System.Text.RegularExpressions.RegexNode ReverseLeft()
    // Offset: 0x1EA1DE0
    System::Text::RegularExpressions::RegexNode* ReverseLeft();
    // System.Void MakeRep(System.Int32 type, System.Int32 min, System.Int32 max)
    // Offset: 0x1EA1E58
    void MakeRep(int type, int min, int max);
    // System.Text.RegularExpressions.RegexNode Reduce()
    // Offset: 0x1EA1E70
    System::Text::RegularExpressions::RegexNode* Reduce();
    // System.Text.RegularExpressions.RegexNode StripEnation(System.Int32 emptyType)
    // Offset: 0x1EA28C4
    System::Text::RegularExpressions::RegexNode* StripEnation(int emptyType);
    // System.Text.RegularExpressions.RegexNode ReduceGroup()
    // Offset: 0x1EA2730
    System::Text::RegularExpressions::RegexNode* ReduceGroup();
    // System.Text.RegularExpressions.RegexNode ReduceRep()
    // Offset: 0x1EA259C
    System::Text::RegularExpressions::RegexNode* ReduceRep();
    // System.Text.RegularExpressions.RegexNode ReduceSet()
    // Offset: 0x1EA2760
    System::Text::RegularExpressions::RegexNode* ReduceSet();
    // System.Text.RegularExpressions.RegexNode ReduceAlternation()
    // Offset: 0x1EA1EBC
    System::Text::RegularExpressions::RegexNode* ReduceAlternation();
    // System.Text.RegularExpressions.RegexNode ReduceConcatenation()
    // Offset: 0x1EA2254
    System::Text::RegularExpressions::RegexNode* ReduceConcatenation();
    // System.Text.RegularExpressions.RegexNode MakeQuantifier(System.Boolean lazy, System.Int32 min, System.Int32 max)
    // Offset: 0x1EA2990
    System::Text::RegularExpressions::RegexNode* MakeQuantifier(bool lazy, int min, int max);
    // System.Void AddChild(System.Text.RegularExpressions.RegexNode newChild)
    // Offset: 0x1EA2AB8
    void AddChild(System::Text::RegularExpressions::RegexNode* newChild);
    // System.Text.RegularExpressions.RegexNode Child(System.Int32 i)
    // Offset: 0x1E9EDC4
    System::Text::RegularExpressions::RegexNode* Child(int i);
    // System.Int32 ChildCount()
    // Offset: 0x1E9ED70
    int ChildCount();
    // System.Int32 Type()
    // Offset: 0x1EA2B74
    int Type();
  }; // System.Text.RegularExpressions.RegexNode
  #pragma pack(pop)
  static check_size<sizeof(RegexNode), 56 + sizeof(System::Text::RegularExpressions::RegexNode*)> __System_Text_RegularExpressions_RegexNodeSizeCheck;
  static_assert(sizeof(RegexNode) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::UseOptionR
// Il2CppName: UseOptionR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::UseOptionR)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "UseOptionR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::ReverseLeft
// Il2CppName: ReverseLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::ReverseLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "ReverseLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::MakeRep
// Il2CppName: MakeRep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexNode::*)(int, int, int)>(&System::Text::RegularExpressions::RegexNode::MakeRep)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "MakeRep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, min, max});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::Reduce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::StripEnation
// Il2CppName: StripEnation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)(int)>(&System::Text::RegularExpressions::RegexNode::StripEnation)> {
  static const MethodInfo* get() {
    static auto* emptyType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "StripEnation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emptyType});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::ReduceGroup
// Il2CppName: ReduceGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::ReduceGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "ReduceGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::ReduceRep
// Il2CppName: ReduceRep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::ReduceRep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "ReduceRep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::ReduceSet
// Il2CppName: ReduceSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::ReduceSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "ReduceSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::ReduceAlternation
// Il2CppName: ReduceAlternation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::ReduceAlternation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "ReduceAlternation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::ReduceConcatenation
// Il2CppName: ReduceConcatenation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::ReduceConcatenation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "ReduceConcatenation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::MakeQuantifier
// Il2CppName: MakeQuantifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)(bool, int, int)>(&System::Text::RegularExpressions::RegexNode::MakeQuantifier)> {
  static const MethodInfo* get() {
    static auto* lazy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "MakeQuantifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lazy, min, max});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::AddChild
// Il2CppName: AddChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexNode::*)(System::Text::RegularExpressions::RegexNode*)>(&System::Text::RegularExpressions::RegexNode::AddChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "AddChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::Child
// Il2CppName: Child
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexNode* (System::Text::RegularExpressions::RegexNode::*)(int)>(&System::Text::RegularExpressions::RegexNode::Child)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "Child", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::ChildCount
// Il2CppName: ChildCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::ChildCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "ChildCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexNode::Type
// Il2CppName: Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexNode::*)()>(&System::Text::RegularExpressions::RegexNode::Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexNode*), "Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
