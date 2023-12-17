#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__AbstractEventData_def.hpp"
CORDL_MODULE_EXPORT(BaseEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::BaseEventData);
// Type: UnityEngine.EventSystems::BaseEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13164))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13165))
// CS Name: ::UnityEngine.EventSystems::BaseEventData*
class CORDL_TYPE BaseEventData : public ::UnityEngine::EventSystems::AbstractEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::EventSystems::AbstractEventData)]{};

/// @brief Field m_EventSystem offset 0x18
 __declspec(property(get=__get_m_EventSystem, put=__set_m_EventSystem)) ::UnityEngine::EventSystems::EventSystem*  m_EventSystem;

 __declspec(property(get=get_currentInputModule)) ::UnityEngine::EventSystems::BaseInputModule*  currentInputModule;

 __declspec(property(get=get_selectedObject, put=set_selectedObject)) ::UnityEngine::GameObject*  selectedObject;

constexpr void __set_m_EventSystem(::UnityEngine::EventSystems::EventSystem*  value) ;

constexpr ::UnityEngine::EventSystems::EventSystem* __get_m_EventSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> __get_m_EventSystem() const;

static inline ::UnityEngine::EventSystems::BaseEventData* New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method .ctor addr 0x2d95400 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method get_currentInputModule addr 0x2d9544c size 0x1c virtual false final false
inline ::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule() ;

/// @brief Method get_selectedObject addr 0x2d95468 size 0x1c virtual false final false
inline ::UnityEngine::GameObject* get_selectedObject() ;

/// @brief Method set_selectedObject addr 0x2d95484 size 0x1c virtual false final false
inline void set_selectedObject(::UnityEngine::GameObject*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "BaseEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseEventData(BaseEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseEventData(BaseEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseEventData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseEventData, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseEventData*, "UnityEngine.EventSystems", "BaseEventData");
