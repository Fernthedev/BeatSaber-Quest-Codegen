#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GradientRemap)
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GradientRemap);
// Type: UnityEngine.UIElements.UIR::GradientRemap
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7399), inst: 313 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7422))
// CS Name: ::UnityEngine.UIElements.UIR::GradientRemap*
class CORDL_TYPE GradientRemap : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::GradientRemap*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::GradientRemap*>)]{};

/// @brief Field origIndex offset 0x18
 __declspec(property(get=__get_origIndex, put=__set_origIndex)) int32_t  origIndex;

/// @brief Field destIndex offset 0x1c
 __declspec(property(get=__get_destIndex, put=__set_destIndex)) int32_t  destIndex;

/// @brief Field location offset 0x20
 __declspec(property(get=__get_location, put=__set_location)) ::UnityEngine::RectInt  location;

/// @brief Field next offset 0x30
 __declspec(property(get=__get_next, put=__set_next)) ::UnityEngine::UIElements::UIR::GradientRemap*  next;

/// @brief Field atlas offset 0x38
 __declspec(property(get=__get_atlas, put=__set_atlas)) ::UnityEngine::UIElements::TextureId  atlas;

constexpr void __set_origIndex(int32_t  value) ;

constexpr int32_t& __get_origIndex() ;

constexpr int32_t const& __get_origIndex() const;

constexpr void __set_destIndex(int32_t  value) ;

constexpr int32_t& __get_destIndex() ;

constexpr int32_t const& __get_destIndex() const;

constexpr void __set_location(::UnityEngine::RectInt  value) ;

constexpr ::UnityEngine::RectInt& __get_location() ;

constexpr ::UnityEngine::RectInt const& __get_location() const;

constexpr void __set_next(::UnityEngine::UIElements::UIR::GradientRemap*  value) ;

constexpr ::UnityEngine::UIElements::UIR::GradientRemap* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientRemap*> __get_next() const;

constexpr void __set_atlas(::UnityEngine::UIElements::TextureId  value) ;

constexpr ::UnityEngine::UIElements::TextureId& __get_atlas() ;

constexpr ::UnityEngine::UIElements::TextureId const& __get_atlas() const;

/// @brief Method Reset addr 0x2dcd160 size 0x68 virtual false final false
inline void Reset() ;

static inline ::UnityEngine::UIElements::UIR::GradientRemap* New_ctor() ;

/// @brief Method .ctor addr 0x2dcd104 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GradientRemap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GradientRemap(GradientRemap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GradientRemap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GradientRemap(GradientRemap const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GradientRemap()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GradientRemap, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientRemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientRemap*, "UnityEngine.UIElements.UIR", "GradientRemap");
