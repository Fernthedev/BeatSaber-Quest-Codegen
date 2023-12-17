#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HeaderAttribute)
// Forward declare root types
namespace UnityEngine {
class HeaderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HeaderAttribute);
// Type: UnityEngine::HeaderAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10175))
// CS Name: ::UnityEngine::HeaderAttribute*
class CORDL_TYPE HeaderAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::PropertyAttribute)]{};

/// @brief Field header offset 0x10
 __declspec(property(get=__get_header, put=__set_header)) ::StringW  header;

constexpr void __set_header(::StringW  value) ;

constexpr ::StringW& __get_header() ;

constexpr ::StringW const& __get_header() const;

static inline ::UnityEngine::HeaderAttribute* New_ctor(::StringW  header) ;

/// @brief Method .ctor addr 0x2ccc190 size 0x28 virtual false final false
inline void _ctor(::StringW  header) ;

// Ctor Parameters [CppParam { name: "", ty: "HeaderAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeaderAttribute(HeaderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeaderAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeaderAttribute(HeaderAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HeaderAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HeaderAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::HeaderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HeaderAttribute*, "UnityEngine", "HeaderAttribute");
