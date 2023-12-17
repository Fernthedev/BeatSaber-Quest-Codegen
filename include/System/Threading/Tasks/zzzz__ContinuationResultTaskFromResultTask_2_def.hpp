#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuationResultTaskFromResultTask_2)
namespace System {
class Object;
}
namespace System {
class Delegate;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TAntecedentResult,typename TResult>
class ContinuationResultTaskFromResultTask_2;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
class ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult,::il2cpp_utils::il2cpp_reference_type TResult>
class ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2);
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5126 }), TypeDefinitionIndex(TypeDefinitionIndex(2800))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2800), inst: 6939 })
// CS Name: ::System.Threading.Tasks::ContinuationResultTaskFromResultTask`2<TAntecedentResult,TResult>*
class CORDL_TYPE ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>> : public ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>)]{};

/// @brief Field m_antecedent offset 0x58
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<TAntecedentResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>* New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationResultTaskFromResultTask_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2800)), TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5126 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2800), inst: 6938 })
// CS Name: ::System.Threading.Tasks::ContinuationResultTaskFromResultTask`2<TAntecedentResult,TResult>*
class CORDL_TYPE ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>> : public ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>)]{};

/// @brief Field m_antecedent offset 0x58
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<int32_t>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>* New_ctor(::System::Threading::Tasks::Task_1<int32_t>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<int32_t>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationResultTaskFromResultTask_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5126 }), TypeDefinitionIndex(TypeDefinitionIndex(2800))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2800), inst: 81 })
// CS Name: ::System.Threading.Tasks::ContinuationResultTaskFromResultTask`2<TAntecedentResult,TResult>*
class CORDL_TYPE ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult> : public ::System::Threading::Tasks::Task_1<TResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task_1<TResult>)]{};

/// @brief Field m_antecedent offset 0x58
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<TAntecedentResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>* New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationResultTaskFromResultTask_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2, "System.Threading.Tasks", "ContinuationResultTaskFromResultTask`2");
