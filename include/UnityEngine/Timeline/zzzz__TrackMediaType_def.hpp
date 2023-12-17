#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(TrackMediaType)
namespace UnityEngine::Timeline {
struct __TimelineAsset__MediaType;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackMediaType;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackMediaType);
// Type: UnityEngine.Timeline::TrackMediaType
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13914))
// CS Name: ::UnityEngine.Timeline::TrackMediaType*
class CORDL_TYPE TrackMediaType : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field m_MediaType offset 0x10
 __declspec(property(get=__get_m_MediaType, put=__set_m_MediaType)) ::UnityEngine::Timeline::__TimelineAsset__MediaType  m_MediaType;

constexpr void __set_m_MediaType(::UnityEngine::Timeline::__TimelineAsset__MediaType  value) ;

constexpr ::UnityEngine::Timeline::__TimelineAsset__MediaType& __get_m_MediaType() ;

constexpr ::UnityEngine::Timeline::__TimelineAsset__MediaType const& __get_m_MediaType() const;

static inline ::UnityEngine::Timeline::TrackMediaType* New_ctor(::UnityEngine::Timeline::__TimelineAsset__MediaType  mt) ;

/// @brief Method .ctor addr 0x2c6e640 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::Timeline::__TimelineAsset__MediaType  mt) ;

// Ctor Parameters [CppParam { name: "", ty: "TrackMediaType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackMediaType(TrackMediaType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackMediaType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackMediaType(TrackMediaType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackMediaType()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackMediaType, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackMediaType);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackMediaType*, "UnityEngine.Timeline", "TrackMediaType");
