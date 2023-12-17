#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContextMenu)
// Forward declare root types
namespace UnityEngine {
class ContextMenu;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ContextMenu);
// Type: UnityEngine::ContextMenu
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10217))
// CS Name: ::UnityEngine::ContextMenu*
class CORDL_TYPE ContextMenu : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field menuItem offset 0x10
 __declspec(property(get=__get_menuItem, put=__set_menuItem)) ::StringW  menuItem;

/// @brief Field validate offset 0x18
 __declspec(property(get=__get_validate, put=__set_validate)) bool  validate;

/// @brief Field priority offset 0x1c
 __declspec(property(get=__get_priority, put=__set_priority)) int32_t  priority;

constexpr void __set_menuItem(::StringW  value) ;

constexpr ::StringW& __get_menuItem() ;

constexpr ::StringW const& __get_menuItem() const;

constexpr void __set_validate(bool  value) ;

constexpr bool& __get_validate() ;

constexpr bool const& __get_validate() const;

constexpr void __set_priority(int32_t  value) ;

constexpr int32_t& __get_priority() ;

constexpr int32_t const& __get_priority() const;

static inline ::UnityEngine::ContextMenu* New_ctor(::StringW  itemName) ;

/// @brief Method .ctor addr 0x2cd2834 size 0x38 virtual false final false
inline void _ctor(::StringW  itemName) ;

static inline ::UnityEngine::ContextMenu* New_ctor(::StringW  itemName, bool  isValidateFunction) ;

/// @brief Method .ctor addr 0x2cd286c size 0x3c virtual false final false
inline void _ctor(::StringW  itemName, bool  isValidateFunction) ;

static inline ::UnityEngine::ContextMenu* New_ctor(::StringW  itemName, bool  isValidateFunction, int32_t  priority) ;

/// @brief Method .ctor addr 0x2cd28a8 size 0x40 virtual false final false
inline void _ctor(::StringW  itemName, bool  isValidateFunction, int32_t  priority) ;

// Ctor Parameters [CppParam { name: "", ty: "ContextMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextMenu(ContextMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextMenu(ContextMenu const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContextMenu()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContextMenu, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ContextMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContextMenu*, "UnityEngine", "ContextMenu");
