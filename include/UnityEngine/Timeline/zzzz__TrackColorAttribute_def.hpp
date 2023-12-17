#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrackColorAttribute)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackColorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackColorAttribute);
// Type: UnityEngine.Timeline::TrackColorAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13864))
// CS Name: ::UnityEngine.Timeline::TrackColorAttribute*
class CORDL_TYPE TrackColorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field m_Color offset 0x10
 __declspec(property(get=__get_m_Color, put=__set_m_Color)) ::UnityEngine::Color  m_Color;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set_m_Color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_Color() ;

constexpr ::UnityEngine::Color const& __get_m_Color() const;

/// @brief Method get_color addr 0x2c61a70 size 0xc virtual false final false
inline ::UnityEngine::Color get_color() ;

static inline ::UnityEngine::Timeline::TrackColorAttribute* New_ctor(float_t  r, float_t  g, float_t  b) ;

/// @brief Method .ctor addr 0x2c61a7c size 0x44 virtual false final false
inline void _ctor(float_t  r, float_t  g, float_t  b) ;

// Ctor Parameters [CppParam { name: "", ty: "TrackColorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackColorAttribute(TrackColorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackColorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackColorAttribute(TrackColorAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackColorAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackColorAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackColorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackColorAttribute*, "UnityEngine.Timeline", "TrackColorAttribute");
