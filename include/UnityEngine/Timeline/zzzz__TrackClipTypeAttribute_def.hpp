#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(TrackClipTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackClipTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackClipTypeAttribute);
// Type: UnityEngine.Timeline::TrackClipTypeAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13915))
// CS Name: ::UnityEngine.Timeline::TrackClipTypeAttribute*
class CORDL_TYPE TrackClipTypeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field inspectedType offset 0x10
 __declspec(property(get=__get_inspectedType, put=__set_inspectedType)) ::System::Type*  inspectedType;

/// @brief Field allowAutoCreate offset 0x18
 __declspec(property(get=__get_allowAutoCreate, put=__set_allowAutoCreate)) bool  allowAutoCreate;

constexpr void __set_inspectedType(::System::Type*  value) ;

constexpr ::System::Type* __get_inspectedType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_inspectedType() const;

constexpr void __set_allowAutoCreate(bool  value) ;

constexpr bool& __get_allowAutoCreate() ;

constexpr bool const& __get_allowAutoCreate() const;

static inline ::UnityEngine::Timeline::TrackClipTypeAttribute* New_ctor(::System::Type*  clipClass) ;

/// @brief Method .ctor addr 0x2c6e668 size 0x30 virtual false final false
inline void _ctor(::System::Type*  clipClass) ;

static inline ::UnityEngine::Timeline::TrackClipTypeAttribute* New_ctor(::System::Type*  clipClass, bool  allowAutoCreate) ;

/// @brief Method .ctor addr 0x2c6e698 size 0x28 virtual false final false
inline void _ctor(::System::Type*  clipClass, bool  allowAutoCreate) ;

// Ctor Parameters [CppParam { name: "", ty: "TrackClipTypeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackClipTypeAttribute(TrackClipTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackClipTypeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackClipTypeAttribute(TrackClipTypeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackClipTypeAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackClipTypeAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackClipTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackClipTypeAttribute*, "UnityEngine.Timeline", "TrackClipTypeAttribute");
