#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MouseButtonEventData)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
// Forward declare root types
namespace VRUIControls {
class MouseButtonEventData;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::MouseButtonEventData);
// Type: VRUIControls::MouseButtonEventData
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15669))
// CS Name: ::VRUIControls::MouseButtonEventData*
class CORDL_TYPE MouseButtonEventData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field buttonState offset 0x10
 __declspec(property(get=__get_buttonState, put=__set_buttonState)) ::UnityEngine::EventSystems::__PointerEventData__FramePressState  buttonState;

/// @brief Field buttonData offset 0x18
 __declspec(property(get=__get_buttonData, put=__set_buttonData)) ::UnityEngine::EventSystems::PointerEventData*  buttonData;

constexpr void __set_buttonState(::UnityEngine::EventSystems::__PointerEventData__FramePressState  value) ;

constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState& __get_buttonState() ;

constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState const& __get_buttonState() const;

constexpr void __set_buttonData(::UnityEngine::EventSystems::PointerEventData*  value) ;

constexpr ::UnityEngine::EventSystems::PointerEventData* __get_buttonData() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> __get_buttonData() const;

/// @brief Method PressedThisFrame addr 0x2eb41a8 size 0x10 virtual false final false
inline bool PressedThisFrame() ;

/// @brief Method ReleasedThisFrame addr 0x2eb41b8 size 0x14 virtual false final false
inline bool ReleasedThisFrame() ;

static inline ::VRUIControls::MouseButtonEventData* New_ctor() ;

/// @brief Method .ctor addr 0x2eb41cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MouseButtonEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseButtonEventData(MouseButtonEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseButtonEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseButtonEventData(MouseButtonEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MouseButtonEventData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::MouseButtonEventData, 0x20>, "Size mismatch!");

} // namespace end def VRUIControls
NEED_NO_BOX(::VRUIControls::MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::MouseButtonEventData*, "VRUIControls", "MouseButtonEventData");
