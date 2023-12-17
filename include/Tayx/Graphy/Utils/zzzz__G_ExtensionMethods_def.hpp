#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(G_ExtensionMethods)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Tayx::Graphy::Utils {
class G_ExtensionMethods;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Utils::G_ExtensionMethods);
// Type: Tayx.Graphy.Utils::G_ExtensionMethods
namespace Tayx::Graphy::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15070))
// CS Name: ::Tayx.Graphy.Utils::G_ExtensionMethods*
class CORDL_TYPE G_ExtensionMethods : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SetAllActive addr 0x2a06608 size 0x164 virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SetAllActive(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  gameObjects, bool  active) ;

/// @brief Method SetOneActive addr 0x2a0676c size 0xb4 virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* SetOneActive(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*  images, int32_t  active) ;

/// @brief Method SetAllActive addr 0x2a06820 size 0x17c virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* SetAllActive(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*  images, bool  active) ;

// Ctor Parameters [CppParam { name: "", ty: "G_ExtensionMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_ExtensionMethods(G_ExtensionMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_ExtensionMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_ExtensionMethods(G_ExtensionMethods const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 G_ExtensionMethods()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Utils::G_ExtensionMethods, 0x10>, "Size mismatch!");

} // namespace end def Tayx::Graphy::Utils
NEED_NO_BOX(::Tayx::Graphy::Utils::G_ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Utils::G_ExtensionMethods*, "Tayx.Graphy.Utils", "G_ExtensionMethods");
