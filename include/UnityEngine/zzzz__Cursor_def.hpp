#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(Cursor)
namespace UnityEngine {
struct CursorMode;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct CursorLockMode;
}
// Forward declare root types
namespace UnityEngine {
class Cursor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Cursor);
// Type: UnityEngine::Cursor
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10061))
// CS Name: ::UnityEngine::Cursor*
class CORDL_TYPE Cursor : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SetCursor addr 0x2ca21c4 size 0x58 virtual false final false
static inline void SetCursor(::UnityEngine::Texture2D*  texture, ::UnityEngine::Vector2  hotspot, ::UnityEngine::CursorMode  cursorMode) ;

/// @brief Method set_visible addr 0x2ca2270 size 0x3c virtual false final false
static inline void set_visible(bool  value) ;

/// @brief Method get_lockState addr 0x2ca22ac size 0x28 virtual false final false
static inline ::UnityEngine::CursorLockMode get_lockState() ;

/// @brief Method set_lockState addr 0x2ca22d4 size 0x3c virtual false final false
static inline void set_lockState(::UnityEngine::CursorLockMode  value) ;

/// @brief Method SetCursor_Injected addr 0x2ca221c size 0x54 virtual false final false
static inline void SetCursor_Injected(::UnityEngine::Texture2D*  texture, ByRef<::UnityEngine::Vector2>  hotspot, ::UnityEngine::CursorMode  cursorMode) ;

// Ctor Parameters [CppParam { name: "", ty: "Cursor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Cursor(Cursor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cursor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cursor(Cursor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Cursor()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Cursor, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Cursor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cursor*, "UnityEngine", "Cursor");
