#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShapeAttribute)
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class ShapeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::ShapeAttribute);
// Type: UnityEngine.ProBuilder.Shapes::ShapeAttribute
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12234))
// CS Name: ::UnityEngine.ProBuilder.Shapes::ShapeAttribute*
class CORDL_TYPE ShapeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

static inline ::UnityEngine::ProBuilder::Shapes::ShapeAttribute* New_ctor(::StringW  n) ;

/// @brief Method .ctor addr 0x2b8dc40 size 0x28 virtual false final false
inline void _ctor(::StringW  n) ;

// Ctor Parameters [CppParam { name: "", ty: "ShapeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeAttribute(ShapeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeAttribute(ShapeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ShapeAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::ShapeAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::ShapeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::ShapeAttribute*, "UnityEngine.ProBuilder.Shapes", "ShapeAttribute");
