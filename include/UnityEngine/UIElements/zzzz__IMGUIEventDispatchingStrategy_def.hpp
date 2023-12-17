#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IMGUIEventDispatchingStrategy)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMGUIEventDispatchingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIEventDispatchingStrategy);
// Type: UnityEngine.UIElements::IMGUIEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7238))
// CS Name: ::UnityEngine.UIElements::IMGUIEventDispatchingStrategy*
class CORDL_TYPE IMGUIEventDispatchingStrategy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr operator  ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept;

/// @brief Method CanDispatchEvent addr 0x2e52a1c size 0x78 virtual true final true
inline bool CanDispatchEvent(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method DispatchEvent addr 0x2e52a94 size 0xc0 virtual true final true
inline void DispatchEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel) ;

static inline ::UnityEngine::UIElements::IMGUIEventDispatchingStrategy* New_ctor() ;

/// @brief Method .ctor addr 0x2e52b54 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IMGUIEventDispatchingStrategy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IMGUIEventDispatchingStrategy(IMGUIEventDispatchingStrategy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IMGUIEventDispatchingStrategy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMGUIEventDispatchingStrategy(IMGUIEventDispatchingStrategy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IMGUIEventDispatchingStrategy()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIEventDispatchingStrategy, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIEventDispatchingStrategy*, "UnityEngine.UIElements", "IMGUIEventDispatchingStrategy");
