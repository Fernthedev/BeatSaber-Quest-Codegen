#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyEffect)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyEffect);
// Type: ::MaterialPropertyEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4910))
// CS Name: ::MaterialPropertyEffect*
class CORDL_TYPE MaterialPropertyEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::FloatFxGroupEffectTarget)]{};

/// @brief Field _materialPropertyBlockController offset 0x18
 __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  _materialPropertyBlockController;

/// @brief Field _propertyName offset 0x20
 __declspec(property(get=__get__propertyName, put=__set__propertyName)) ::StringW  _propertyName;

/// @brief Field _propertyId offset 0x28
 __declspec(property(get=__get__propertyId, put=__set__propertyId)) int32_t  _propertyId;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__materialPropertyBlockController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__materialPropertyBlockController() const;

constexpr void __set__propertyName(::StringW  value) ;

constexpr ::StringW& __get__propertyName() ;

constexpr ::StringW const& __get__propertyName() const;

constexpr void __set__propertyId(int32_t  value) ;

constexpr int32_t& __get__propertyId() ;

constexpr int32_t const& __get__propertyId() const;

/// @brief Method Awake addr 0x23a65d0 size 0x20 virtual false final false
inline void Awake() ;

/// @brief Method SetValue addr 0x23a65f0 size 0xc8 virtual true final false
inline void SetValue(float_t  value) ;

/// @brief Method TriggerValue addr 0x23a66b8 size 0xc8 virtual true final false
inline void TriggerValue(float_t  value) ;

static inline ::GlobalNamespace::MaterialPropertyEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23a6780 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyEffect(MaterialPropertyEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyEffect(MaterialPropertyEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialPropertyEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyEffect, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyEffect*, "", "MaterialPropertyEffect");
