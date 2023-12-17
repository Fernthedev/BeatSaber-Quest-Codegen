#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DemoGUIMessage)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace RootMotion {
class DemoGUIMessage;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::DemoGUIMessage);
// Type: RootMotion::DemoGUIMessage
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12490))
// CS Name: ::RootMotion::DemoGUIMessage*
class CORDL_TYPE DemoGUIMessage : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field text offset 0x18
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field color offset 0x20
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

/// @brief Method OnGUI addr 0x123cce0 size 0xf8 virtual false final false
inline void OnGUI() ;

static inline ::RootMotion::DemoGUIMessage* New_ctor() ;

/// @brief Method .ctor addr 0x123cdd8 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DemoGUIMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DemoGUIMessage(DemoGUIMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DemoGUIMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DemoGUIMessage(DemoGUIMessage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DemoGUIMessage()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::DemoGUIMessage, 0x30>, "Size mismatch!");

} // namespace end def RootMotion
NEED_NO_BOX(::RootMotion::DemoGUIMessage);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::DemoGUIMessage*, "RootMotion", "DemoGUIMessage");
