#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Task_WhenAllPromise_1)
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename T>
class __Task__WhenAllPromise_1;
}
namespace System::Threading::Tasks {
template<>
class __Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class __Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T>
class __Task__WhenAllPromise_1<T>;
}
namespace System::Threading::Tasks {
template<>
class __Task__WhenAllPromise_1<bool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__Task__WhenAllPromise_1);
// Type: ::WhenAllPromise`1
// Type: ::WhenAllPromise`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2785)), TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5134 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2785), inst: 6145 })
// CS Name: ::Task::WhenAllPromise`1<T>*
class CORDL_TYPE __Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::System::Threading::Tasks::Task_1<::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,int64_t>,::Array<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,int64_t>,::Array<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>>)]{};

/// @brief Field m_tasks offset 0x58
 __declspec(property(get=__get_m_tasks, put=__set_m_tasks)) ::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>  m_tasks;

/// @brief Field m_count offset 0x60
 __declspec(property(get=__get_m_count, put=__set_m_count)) int32_t  m_count;

 __declspec(property(get=get_ShouldNotifyDebuggerOfWaitCompletion)) bool  ShouldNotifyDebuggerOfWaitCompletion;

 __declspec(property(get=get_InvokeMayRunArbitraryCode)) bool  InvokeMayRunArbitraryCode;

/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

constexpr void __set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>  value) ;

constexpr ::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>& __get_m_tasks() ;

constexpr ::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*> const& __get_m_tasks() const;

constexpr void __set_m_count(int32_t  value) ;

constexpr int32_t& __get_m_count() ;

constexpr int32_t const& __get_m_count() const;

static inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>  tasks) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>  tasks) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Invoke(::System::Threading::Tasks::Task*  ignored) ;

/// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_ShouldNotifyDebuggerOfWaitCompletion() ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_InvokeMayRunArbitraryCode() ;

// Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Task__WhenAllPromise_1(__Task__WhenAllPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Task__WhenAllPromise_1(__Task__WhenAllPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Task__WhenAllPromise_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::WhenAllPromise`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2785)), TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5134 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2785), inst: 4231 })
// CS Name: ::Task::WhenAllPromise`1<T>*
class CORDL_TYPE __Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData> : public ::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>)]{};

/// @brief Field m_tasks offset 0x58
 __declspec(property(get=__get_m_tasks, put=__set_m_tasks)) ::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>  m_tasks;

/// @brief Field m_count offset 0x60
 __declspec(property(get=__get_m_count, put=__set_m_count)) int32_t  m_count;

 __declspec(property(get=get_ShouldNotifyDebuggerOfWaitCompletion)) bool  ShouldNotifyDebuggerOfWaitCompletion;

 __declspec(property(get=get_InvokeMayRunArbitraryCode)) bool  InvokeMayRunArbitraryCode;

/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

constexpr void __set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>  value) ;

constexpr ::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>& __get_m_tasks() ;

constexpr ::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*> const& __get_m_tasks() const;

constexpr void __set_m_count(int32_t  value) ;

constexpr int32_t& __get_m_count() ;

constexpr int32_t const& __get_m_count() const;

static inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>  tasks) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>  tasks) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Invoke(::System::Threading::Tasks::Task*  ignored) ;

/// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_ShouldNotifyDebuggerOfWaitCompletion() ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_InvokeMayRunArbitraryCode() ;

// Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Task__WhenAllPromise_1(__Task__WhenAllPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Task__WhenAllPromise_1(__Task__WhenAllPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Task__WhenAllPromise_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::WhenAllPromise`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5134 }), TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2785))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2785), inst: 105 })
// CS Name: ::Task::WhenAllPromise`1<T>*
class CORDL_TYPE __Task__WhenAllPromise_1<bool> : public ::System::Threading::Tasks::Task_1<::ArrayW<bool,::Array<bool>*>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<::ArrayW<bool,::Array<bool>*>>)]{};

/// @brief Field m_tasks offset 0x58
 __declspec(property(get=__get_m_tasks, put=__set_m_tasks)) ::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>  m_tasks;

/// @brief Field m_count offset 0x60
 __declspec(property(get=__get_m_count, put=__set_m_count)) int32_t  m_count;

 __declspec(property(get=get_ShouldNotifyDebuggerOfWaitCompletion)) bool  ShouldNotifyDebuggerOfWaitCompletion;

 __declspec(property(get=get_InvokeMayRunArbitraryCode)) bool  InvokeMayRunArbitraryCode;

/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

constexpr void __set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>  value) ;

constexpr ::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>& __get_m_tasks() ;

constexpr ::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*> const& __get_m_tasks() const;

constexpr void __set_m_count(int32_t  value) ;

constexpr int32_t& __get_m_count() ;

constexpr int32_t const& __get_m_count() const;

static inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>* New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>  tasks) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>  tasks) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Invoke(::System::Threading::Tasks::Task*  ignored) ;

/// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_ShouldNotifyDebuggerOfWaitCompletion() ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_InvokeMayRunArbitraryCode() ;

// Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Task__WhenAllPromise_1(__Task__WhenAllPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Task__WhenAllPromise_1(__Task__WhenAllPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Task__WhenAllPromise_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::WhenAllPromise`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5134 }), TypeDefinitionIndex(TypeDefinitionIndex(2785))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2785), inst: 2 })
// CS Name: ::Task::WhenAllPromise`1<T>*
class CORDL_TYPE __Task__WhenAllPromise_1<T> : public ::System::Threading::Tasks::Task_1<::ArrayW<T,::Array<T>*>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<::ArrayW<T,::Array<T>*>>)]{};

/// @brief Field m_tasks offset 0x58
 __declspec(property(get=__get_m_tasks, put=__set_m_tasks)) ::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>  m_tasks;

/// @brief Field m_count offset 0x60
 __declspec(property(get=__get_m_count, put=__set_m_count)) int32_t  m_count;

 __declspec(property(get=get_ShouldNotifyDebuggerOfWaitCompletion)) bool  ShouldNotifyDebuggerOfWaitCompletion;

 __declspec(property(get=get_InvokeMayRunArbitraryCode)) bool  InvokeMayRunArbitraryCode;

/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

constexpr void __set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>  value) ;

constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>& __get_m_tasks() ;

constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*> const& __get_m_tasks() const;

constexpr void __set_m_count(int32_t  value) ;

constexpr int32_t& __get_m_count() ;

constexpr int32_t const& __get_m_count() const;

static inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<T>* New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>  tasks) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>  tasks) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Invoke(::System::Threading::Tasks::Task*  ignored) ;

/// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_ShouldNotifyDebuggerOfWaitCompletion() ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_InvokeMayRunArbitraryCode() ;

// Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Task__WhenAllPromise_1(__Task__WhenAllPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Task__WhenAllPromise_1(__Task__WhenAllPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Task__WhenAllPromise_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__Task__WhenAllPromise_1, "System.Threading.Tasks", "Task/WhenAllPromise`1");
