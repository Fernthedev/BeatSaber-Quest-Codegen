#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativePropertyAttribute)
namespace UnityEngine::Bindings {
struct TargetType;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class NativePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativePropertyAttribute);
// Type: UnityEngine.Bindings::NativePropertyAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16019))
// CS Name: ::UnityEngine.Bindings::NativePropertyAttribute*
class CORDL_TYPE NativePropertyAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Bindings::NativeMethodAttribute)]{};

/// @brief Field <TargetType>k__BackingField offset 0x1c
 __declspec(property(get=__get__TargetType_k__BackingField, put=__set__TargetType_k__BackingField)) ::UnityEngine::Bindings::TargetType  _TargetType_k__BackingField;

 __declspec(property(put=set_TargetType)) ::UnityEngine::Bindings::TargetType  TargetType;

constexpr void __set__TargetType_k__BackingField(::UnityEngine::Bindings::TargetType  value) ;

constexpr ::UnityEngine::Bindings::TargetType& __get__TargetType_k__BackingField() ;

constexpr ::UnityEngine::Bindings::TargetType const& __get__TargetType_k__BackingField() const;

/// @brief Method set_TargetType addr 0x2d18654 size 0x8 virtual false final false
inline void set_TargetType(::UnityEngine::Bindings::TargetType  value) ;

static inline ::UnityEngine::Bindings::NativePropertyAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2d1865c size 0x8 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::Bindings::NativePropertyAttribute* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2d18664 size 0x4 virtual false final false
inline void _ctor(::StringW  name) ;

static inline ::UnityEngine::Bindings::NativePropertyAttribute* New_ctor(::StringW  name, bool  isFree, ::UnityEngine::Bindings::TargetType  targetType) ;

/// @brief Method .ctor addr 0x2d18668 size 0x30 virtual false final false
inline void _ctor(::StringW  name, bool  isFree, ::UnityEngine::Bindings::TargetType  targetType) ;

static inline ::UnityEngine::Bindings::NativePropertyAttribute* New_ctor(::StringW  name, bool  isFree, ::UnityEngine::Bindings::TargetType  targetType, bool  isThreadSafe) ;

/// @brief Method .ctor addr 0x2d18698 size 0x44 virtual false final false
inline void _ctor(::StringW  name, bool  isFree, ::UnityEngine::Bindings::TargetType  targetType, bool  isThreadSafe) ;

// Ctor Parameters [CppParam { name: "", ty: "NativePropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativePropertyAttribute(NativePropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativePropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativePropertyAttribute(NativePropertyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativePropertyAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativePropertyAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativePropertyAttribute*, "UnityEngine.Bindings", "NativePropertyAttribute");
