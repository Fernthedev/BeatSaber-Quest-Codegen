#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperation)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class AsyncOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AsyncOperation);
// Type: UnityEngine::AsyncOperation
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10191))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10201))
// CS Name: ::UnityEngine::AsyncOperation*
class CORDL_TYPE AsyncOperation : public ::UnityEngine::YieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::YieldInstruction)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Field m_completeCallback offset 0x18
 __declspec(property(get=__get_m_completeCallback, put=__set_m_completeCallback)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  m_completeCallback;

 __declspec(property(get=get_isDone)) bool  isDone;

 __declspec(property(get=get_progress)) float_t  progress;

 __declspec(property(put=set_priority)) int32_t  priority;

 __declspec(property(get=get_allowSceneActivation, put=set_allowSceneActivation)) bool  allowSceneActivation;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

constexpr void __set_m_completeCallback(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* __get_m_completeCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::AsyncOperation*>*> __get_m_completeCallback() const;

/// @brief Method Finalize addr 0x2cd0638 size 0xbc virtual true final false
inline void Finalize() ;

/// @brief Method InvokeCompletionEvent addr 0x2cd0730 size 0x30 virtual false final false
inline void InvokeCompletionEvent() ;

/// @brief Method add_completed addr 0x2cd0760 size 0xfc virtual false final false
inline void add_completed(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

/// @brief Method remove_completed addr 0x2cd0898 size 0xa8 virtual false final false
inline void remove_completed(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

/// @brief Method InternalDestroy addr 0x2cd06f4 size 0x3c virtual false final false
static inline void InternalDestroy(::cordl_internals::intptr_t  ptr) ;

/// @brief Method get_isDone addr 0x2cd085c size 0x3c virtual false final false
inline bool get_isDone() ;

/// @brief Method get_progress addr 0x2cd0940 size 0x3c virtual false final false
inline float_t get_progress() ;

/// @brief Method set_priority addr 0x2cd097c size 0x44 virtual false final false
inline void set_priority(int32_t  value) ;

/// @brief Method get_allowSceneActivation addr 0x2cd09c0 size 0x3c virtual false final false
inline bool get_allowSceneActivation() ;

/// @brief Method set_allowSceneActivation addr 0x2cd09fc size 0x44 virtual false final false
inline void set_allowSceneActivation(bool  value) ;

static inline ::UnityEngine::AsyncOperation* New_ctor() ;

/// @brief Method .ctor addr 0x2cd0a40 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperation(AsyncOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperation(AsyncOperation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncOperation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AsyncOperation, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AsyncOperation*, "UnityEngine", "AsyncOperation");
