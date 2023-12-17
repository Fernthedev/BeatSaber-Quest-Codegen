#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityEvent)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Forward declare root types
namespace UnityEngine::Events {
class UnityEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::UnityEvent);
// Type: UnityEngine.Events::UnityEvent
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10471))
// CS Name: ::UnityEngine.Events::UnityEvent*
class CORDL_TYPE UnityEvent : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2cfa340 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x2cfa348 size 0x2c virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction*  call) ;

/// @brief Method RemoveListener addr 0x2cfa3e0 size 0x44 virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction*  call) ;

/// @brief Method FindMethod_Impl addr 0x2cfa424 size 0x64 virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x2cfa488 size 0x70 virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x2cfa374 size 0x6c virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction*  action) ;

/// @brief Method Invoke addr 0x2cfa4f8 size 0x180 virtual false final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent(UnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent(UnityEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityEvent, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEvent*, "UnityEngine.Events", "UnityEvent");
