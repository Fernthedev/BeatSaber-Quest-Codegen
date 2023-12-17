#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContextMenuItemAttribute)
// Forward declare root types
namespace UnityEngine {
class ContextMenuItemAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ContextMenuItemAttribute);
// Type: UnityEngine::ContextMenuItemAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10171))
// CS Name: ::UnityEngine::ContextMenuItemAttribute*
class CORDL_TYPE ContextMenuItemAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::PropertyAttribute)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field function offset 0x18
 __declspec(property(get=__get_function, put=__set_function)) ::StringW  function;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_function(::StringW  value) ;

constexpr ::StringW& __get_function() ;

constexpr ::StringW const& __get_function() const;

static inline ::UnityEngine::ContextMenuItemAttribute* New_ctor(::StringW  name, ::StringW  function) ;

/// @brief Method .ctor addr 0x2ccc0cc size 0x2c virtual false final false
inline void _ctor(::StringW  name, ::StringW  function) ;

// Ctor Parameters [CppParam { name: "", ty: "ContextMenuItemAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextMenuItemAttribute(ContextMenuItemAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextMenuItemAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextMenuItemAttribute(ContextMenuItemAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContextMenuItemAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContextMenuItemAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ContextMenuItemAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContextMenuItemAttribute*, "UnityEngine", "ContextMenuItemAttribute");
