// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.ExpressionNode
#include "System/Data/ExpressionNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: DataRelation
  class DataRelation;
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: DataRow
  class DataRow;
  // Forward declaring type: DataRowVersion
  struct DataRowVersion;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: LookupNode
  class LookupNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Data::LookupNode);
DEFINE_IL2CPP_ARG_TYPE(System::Data::LookupNode*, "System.Data", "LookupNode");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.LookupNode
  // [TokenAttribute] Offset: FFFFFFFF
  class LookupNode : public System::Data::ExpressionNode {
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
    // private readonly System.String _relationName
    // Size: 0x8
    // Offset: 0x18
    ::StringW relationName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _columnName
    // Size: 0x8
    // Offset: 0x20
    ::StringW columnName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Data.DataColumn _column
    // Size: 0x8
    // Offset: 0x28
    System::Data::DataColumn* column;
    // Field size check
    static_assert(sizeof(System::Data::DataColumn*) == 0x8);
    // private System.Data.DataRelation _relation
    // Size: 0x8
    // Offset: 0x30
    System::Data::DataRelation* relation;
    // Field size check
    static_assert(sizeof(System::Data::DataRelation*) == 0x8);
    public:
    // Deleting conversion operator: operator System::Data::DataTable*
    constexpr operator System::Data::DataTable*() const noexcept = delete;
    // Get instance field reference: private readonly System.String _relationName
    ::StringW& dyn__relationName();
    // Get instance field reference: private readonly System.String _columnName
    ::StringW& dyn__columnName();
    // Get instance field reference: private System.Data.DataColumn _column
    System::Data::DataColumn*& dyn__column();
    // Get instance field reference: private System.Data.DataRelation _relation
    System::Data::DataRelation*& dyn__relation();
    // System.Void .ctor(System.Data.DataTable table, System.String columnName, System.String relationName)
    // Offset: 0x198D570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LookupNode* New_ctor(System::Data::DataTable* table, ::StringW columnName, ::StringW relationName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Data::LookupNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LookupNode*, creationType>(table, columnName, relationName)));
    }
    // override System.Void Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    // Offset: 0x198D5A8
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Void ExpressionNode::Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    void Bind(System::Data::DataTable* table, System::Collections::Generic::List_1<System::Data::DataColumn*>* list);
    // override System.Object Eval()
    // Offset: 0x198D7AC
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval()
    ::Il2CppObject* Eval();
    // override System.Object Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    // Offset: 0x198D7F4
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    ::Il2CppObject* Eval(System::Data::DataRow* row, System::Data::DataRowVersion version);
    // override System.Object Eval(System.Int32[] recordNos)
    // Offset: 0x198D900
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval(System.Int32[] recordNos)
    ::Il2CppObject* Eval(::ArrayW<int> recordNos);
    // override System.Boolean IsConstant()
    // Offset: 0x198D95C
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::IsConstant()
    bool IsConstant();
    // override System.Boolean IsTableConstant()
    // Offset: 0x198D964
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::IsTableConstant()
    bool IsTableConstant();
    // override System.Boolean HasLocalAggregate()
    // Offset: 0x198D96C
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::HasLocalAggregate()
    bool HasLocalAggregate();
    // override System.Boolean HasRemoteAggregate()
    // Offset: 0x198D974
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::HasRemoteAggregate()
    bool HasRemoteAggregate();
    // override System.Boolean DependsOn(System.Data.DataColumn column)
    // Offset: 0x198D97C
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::DependsOn(System.Data.DataColumn column)
    bool DependsOn(System::Data::DataColumn* column);
    // override System.Data.ExpressionNode Optimize()
    // Offset: 0x198D98C
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Data.ExpressionNode ExpressionNode::Optimize()
    System::Data::ExpressionNode* Optimize();
  }; // System.Data.LookupNode
  #pragma pack(pop)
  static check_size<sizeof(LookupNode), 48 + sizeof(System::Data::DataRelation*)> __System_Data_LookupNodeSizeCheck;
  static_assert(sizeof(LookupNode) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::LookupNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::LookupNode::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::LookupNode::*)(System::Data::DataTable*, System::Collections::Generic::List_1<System::Data::DataColumn*>*)>(&System::Data::LookupNode::Bind)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, list});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::LookupNode::*)()>(&System::Data::LookupNode::Eval)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::LookupNode::*)(System::Data::DataRow*, System::Data::DataRowVersion)>(&System::Data::LookupNode::Eval)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System.Data", "DataRowVersion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, version});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::LookupNode::*)(::ArrayW<int>)>(&System::Data::LookupNode::Eval)> {
  static const MethodInfo* get() {
    static auto* recordNos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNos});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::IsConstant
// Il2CppName: IsConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::LookupNode::*)()>(&System::Data::LookupNode::IsConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "IsConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::IsTableConstant
// Il2CppName: IsTableConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::LookupNode::*)()>(&System::Data::LookupNode::IsTableConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "IsTableConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::HasLocalAggregate
// Il2CppName: HasLocalAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::LookupNode::*)()>(&System::Data::LookupNode::HasLocalAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "HasLocalAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::HasRemoteAggregate
// Il2CppName: HasRemoteAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::LookupNode::*)()>(&System::Data::LookupNode::HasRemoteAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "HasRemoteAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::DependsOn
// Il2CppName: DependsOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::LookupNode::*)(System::Data::DataColumn*)>(&System::Data::LookupNode::DependsOn)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "DependsOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column});
  }
};
// Writing MetadataGetter for method: System::Data::LookupNode::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Data::ExpressionNode* (System::Data::LookupNode::*)()>(&System::Data::LookupNode::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::LookupNode*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
