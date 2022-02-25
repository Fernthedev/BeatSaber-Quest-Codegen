// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Expression
#include "System/Linq/Expressions/Expression.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: NewExpression
  class NewExpression;
  // Forward declaring type: ElementInit
  class ElementInit;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ListInitExpression
  class ListInitExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Linq::Expressions::ListInitExpression);
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Expressions::ListInitExpression*, "System.Linq.Expressions", "ListInitExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.ListInitExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: 119D698
  class ListInitExpression : public System::Linq::Expressions::Expression {
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
    // private readonly System.Linq.Expressions.NewExpression <NewExpression>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Linq::Expressions::NewExpression* NewExpression;
    // Field size check
    static_assert(sizeof(System::Linq::Expressions::NewExpression*) == 0x8);
    // private readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> <Initializers>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ObjectModel::ReadOnlyCollection_1<System::Linq::Expressions::ElementInit*>* Initializers;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::ReadOnlyCollection_1<System::Linq::Expressions::ElementInit*>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.NewExpression <NewExpression>k__BackingField
    System::Linq::Expressions::NewExpression*& dyn_$NewExpression$k__BackingField();
    // Get instance field reference: private readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> <Initializers>k__BackingField
    System::Collections::ObjectModel::ReadOnlyCollection_1<System::Linq::Expressions::ElementInit*>*& dyn_$Initializers$k__BackingField();
    // public System.Linq.Expressions.NewExpression get_NewExpression()
    // Offset: 0x1F07C6C
    System::Linq::Expressions::NewExpression* get_NewExpression();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> get_Initializers()
    // Offset: 0x1F07C74
    System::Collections::ObjectModel::ReadOnlyCollection_1<System::Linq::Expressions::ElementInit*>* get_Initializers();
  }; // System.Linq.Expressions.ListInitExpression
  #pragma pack(pop)
  static check_size<sizeof(ListInitExpression), 24 + sizeof(System::Collections::ObjectModel::ReadOnlyCollection_1<System::Linq::Expressions::ElementInit*>*)> __System_Linq_Expressions_ListInitExpressionSizeCheck;
  static_assert(sizeof(ListInitExpression) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::ListInitExpression::get_NewExpression
// Il2CppName: get_NewExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::Expressions::NewExpression* (System::Linq::Expressions::ListInitExpression::*)()>(&System::Linq::Expressions::ListInitExpression::get_NewExpression)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ListInitExpression*), "get_NewExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ListInitExpression::get_Initializers
// Il2CppName: get_Initializers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<System::Linq::Expressions::ElementInit*>* (System::Linq::Expressions::ListInitExpression::*)()>(&System::Linq::Expressions::ListInitExpression::get_Initializers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ListInitExpression*), "get_Initializers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
