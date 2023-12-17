#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Physics2DRaycaster)
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct RaycastHit2D;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class Physics2DRaycaster;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::Physics2DRaycaster);
// Type: UnityEngine.EventSystems::Physics2DRaycaster
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13212))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13210))
// CS Name: ::UnityEngine.EventSystems::Physics2DRaycaster*
class CORDL_TYPE Physics2DRaycaster : public ::UnityEngine::EventSystems::PhysicsRaycaster {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::EventSystems::PhysicsRaycaster)]{};

/// @brief Field m_Hits offset 0x40
 __declspec(property(get=__get_m_Hits, put=__set_m_Hits)) ::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>  m_Hits;

constexpr void __set_m_Hits(::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>  value) ;

constexpr ::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>& __get_m_Hits() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*> const& __get_m_Hits() const;

static inline ::UnityEngine::EventSystems::Physics2DRaycaster* New_ctor() ;

/// @brief Method .ctor addr 0x2da0428 size 0x28 virtual false final false
inline void _ctor() ;

/// @brief Method Raycast addr 0x2da0478 size 0x5c0 virtual true final false
inline void Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

// Ctor Parameters [CppParam { name: "", ty: "Physics2DRaycaster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics2DRaycaster(Physics2DRaycaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics2DRaycaster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics2DRaycaster(Physics2DRaycaster const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Physics2DRaycaster()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::Physics2DRaycaster, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::Physics2DRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::Physics2DRaycaster*, "UnityEngine.EventSystems", "Physics2DRaycaster");
