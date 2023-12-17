#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MenuCategoryAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class MenuCategoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::MenuCategoryAttribute);
// Type: UnityEngine.Timeline::MenuCategoryAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13926))
// CS Name: ::UnityEngine.Timeline::MenuCategoryAttribute*
class CORDL_TYPE MenuCategoryAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field category offset 0x10
 __declspec(property(get=__get_category, put=__set_category)) ::StringW  category;

constexpr void __set_category(::StringW  value) ;

constexpr ::StringW& __get_category() ;

constexpr ::StringW const& __get_category() const;

static inline ::UnityEngine::Timeline::MenuCategoryAttribute* New_ctor(::StringW  category) ;

/// @brief Method .ctor addr 0x2c6e7c8 size 0x6c virtual false final false
inline void _ctor(::StringW  category) ;

// Ctor Parameters [CppParam { name: "", ty: "MenuCategoryAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuCategoryAttribute(MenuCategoryAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuCategoryAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuCategoryAttribute(MenuCategoryAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MenuCategoryAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::MenuCategoryAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::MenuCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MenuCategoryAttribute*, "UnityEngine.Timeline", "MenuCategoryAttribute");
