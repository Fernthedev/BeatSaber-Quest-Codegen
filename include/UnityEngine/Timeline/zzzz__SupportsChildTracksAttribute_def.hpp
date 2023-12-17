#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupportsChildTracksAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SupportsChildTracksAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SupportsChildTracksAttribute);
// Type: UnityEngine.Timeline::SupportsChildTracksAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13919))
// CS Name: ::UnityEngine.Timeline::SupportsChildTracksAttribute*
class CORDL_TYPE SupportsChildTracksAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field childType offset 0x10
 __declspec(property(get=__get_childType, put=__set_childType)) ::System::Type*  childType;

/// @brief Field levels offset 0x18
 __declspec(property(get=__get_levels, put=__set_levels)) int32_t  levels;

constexpr void __set_childType(::System::Type*  value) ;

constexpr ::System::Type* __get_childType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_childType() const;

constexpr void __set_levels(int32_t  value) ;

constexpr int32_t& __get_levels() ;

constexpr int32_t const& __get_levels() const;

static inline ::UnityEngine::Timeline::SupportsChildTracksAttribute* New_ctor(::System::Type*  childType, int32_t  levels) ;

/// @brief Method .ctor addr 0x2c6e728 size 0x30 virtual false final false
inline void _ctor(::System::Type*  childType, int32_t  levels) ;

// Ctor Parameters [CppParam { name: "", ty: "SupportsChildTracksAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportsChildTracksAttribute(SupportsChildTracksAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportsChildTracksAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportsChildTracksAttribute(SupportsChildTracksAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SupportsChildTracksAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SupportsChildTracksAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SupportsChildTracksAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SupportsChildTracksAttribute*, "UnityEngine.Timeline", "SupportsChildTracksAttribute");
