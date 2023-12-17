#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextAreaAttribute)
// Forward declare root types
namespace UnityEngine {
class TextAreaAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextAreaAttribute);
// Type: UnityEngine::TextAreaAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10179))
// CS Name: ::UnityEngine::TextAreaAttribute*
class CORDL_TYPE TextAreaAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::PropertyAttribute)]{};

/// @brief Field minLines offset 0x10
 __declspec(property(get=__get_minLines, put=__set_minLines)) int32_t  minLines;

/// @brief Field maxLines offset 0x14
 __declspec(property(get=__get_maxLines, put=__set_maxLines)) int32_t  maxLines;

constexpr void __set_minLines(int32_t  value) ;

constexpr int32_t& __get_minLines() ;

constexpr int32_t const& __get_minLines() const;

constexpr void __set_maxLines(int32_t  value) ;

constexpr int32_t& __get_maxLines() ;

constexpr int32_t const& __get_maxLines() const;

static inline ::UnityEngine::TextAreaAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2ccc22c size 0x20 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::TextAreaAttribute* New_ctor(int32_t  minLines, int32_t  maxLines) ;

/// @brief Method .ctor addr 0x2ccc24c size 0x2c virtual false final false
inline void _ctor(int32_t  minLines, int32_t  maxLines) ;

// Ctor Parameters [CppParam { name: "", ty: "TextAreaAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextAreaAttribute(TextAreaAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextAreaAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextAreaAttribute(TextAreaAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextAreaAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAreaAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::TextAreaAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAreaAttribute*, "UnityEngine", "TextAreaAttribute");
