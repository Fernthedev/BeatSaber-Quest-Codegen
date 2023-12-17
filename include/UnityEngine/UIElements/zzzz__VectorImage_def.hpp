#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VectorImage)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct VectorImageVertex;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements {
struct GradientSettings;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VectorImage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VectorImage);
// Type: UnityEngine.UIElements::VectorImage
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6806))
// CS Name: ::UnityEngine.UIElements::VectorImage*
class CORDL_TYPE VectorImage : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field atlas offset 0x18
 __declspec(property(get=__get_atlas, put=__set_atlas)) ::UnityEngine::Texture2D*  atlas;

/// @brief Field vertices offset 0x20
 __declspec(property(get=__get_vertices, put=__set_vertices)) ::ArrayW<::UnityEngine::UIElements::VectorImageVertex,::Array<::UnityEngine::UIElements::VectorImageVertex>*>  vertices;

/// @brief Field indices offset 0x28
 __declspec(property(get=__get_indices, put=__set_indices)) ::ArrayW<uint16_t,::Array<uint16_t>*>  indices;

/// @brief Field settings offset 0x30
 __declspec(property(get=__get_settings, put=__set_settings)) ::ArrayW<::UnityEngine::UIElements::GradientSettings,::Array<::UnityEngine::UIElements::GradientSettings>*>  settings;

/// @brief Field size offset 0x38
 __declspec(property(get=__get_size, put=__set_size)) ::UnityEngine::Vector2  size;

constexpr void __set_atlas(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_atlas() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_atlas() const;

constexpr void __set_vertices(::ArrayW<::UnityEngine::UIElements::VectorImageVertex,::Array<::UnityEngine::UIElements::VectorImageVertex>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex,::Array<::UnityEngine::UIElements::VectorImageVertex>*>& __get_vertices() ;

constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex,::Array<::UnityEngine::UIElements::VectorImageVertex>*> const& __get_vertices() const;

constexpr void __set_indices(::ArrayW<uint16_t,::Array<uint16_t>*>  value) ;

constexpr ::ArrayW<uint16_t,::Array<uint16_t>*>& __get_indices() ;

constexpr ::ArrayW<uint16_t,::Array<uint16_t>*> const& __get_indices() const;

constexpr void __set_settings(::ArrayW<::UnityEngine::UIElements::GradientSettings,::Array<::UnityEngine::UIElements::GradientSettings>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings,::Array<::UnityEngine::UIElements::GradientSettings>*>& __get_settings() ;

constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings,::Array<::UnityEngine::UIElements::GradientSettings>*> const& __get_settings() const;

constexpr void __set_size(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_size() ;

constexpr ::UnityEngine::Vector2 const& __get_size() const;

static inline ::UnityEngine::UIElements::VectorImage* New_ctor() ;

/// @brief Method .ctor addr 0x2dbcf58 size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VectorImage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorImage(VectorImage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorImage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorImage(VectorImage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VectorImage()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VectorImage, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VectorImage);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VectorImage*, "UnityEngine.UIElements", "VectorImage");
