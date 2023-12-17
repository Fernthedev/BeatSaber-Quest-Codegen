#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockAnimator)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockAnimator);
// Type: ::MaterialPropertyBlockAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14563))
// CS Name: ::MaterialPropertyBlockAnimator*
class CORDL_TYPE MaterialPropertyBlockAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _property offset 0x18
 __declspec(property(get=__get__property, put=__set__property)) ::StringW  _property;

/// @brief Field _materialPropertyBlockController offset 0x20
 __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  _materialPropertyBlockController;

/// @brief Field propertyId offset 0x28
 __declspec(property(get=__get_propertyId, put=__set_propertyId)) int32_t  propertyId;

/// @brief Field _isInitialized offset 0x2c
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

 __declspec(property(get=get_materialPropertyBlockController, put=set_materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  materialPropertyBlockController;

constexpr void __set__property(::StringW  value) ;

constexpr ::StringW& __get__property() ;

constexpr ::StringW const& __get__property() const;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__materialPropertyBlockController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__materialPropertyBlockController() const;

constexpr void __set_propertyId(int32_t  value) ;

constexpr int32_t& __get_propertyId() ;

constexpr int32_t const& __get_propertyId() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

/// @brief Method get_materialPropertyBlockController addr 0x211498c size 0x8 virtual false final false
inline ::GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController() ;

/// @brief Method set_materialPropertyBlockController addr 0x2114994 size 0x7c virtual false final false
inline void set_materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

/// @brief Method SetProperty addr 0x2114a10 size 0x4 virtual true final false
inline void SetProperty() ;

/// @brief Method Awake addr 0x2114a14 size 0x90 virtual false final false
inline void Awake() ;

/// @brief Method Update addr 0x2114ad4 size 0x28 virtual false final false
inline void Update() ;

/// @brief Method LazyInit addr 0x2114aa4 size 0x30 virtual false final false
inline void LazyInit() ;

/// @brief Method RefreshProperty addr 0x2114cec size 0x20 virtual false final false
inline void RefreshProperty() ;

static inline ::GlobalNamespace::MaterialPropertyBlockAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x2114d0c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockAnimator(MaterialPropertyBlockAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockAnimator(MaterialPropertyBlockAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialPropertyBlockAnimator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockAnimator, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockAnimator*, "", "MaterialPropertyBlockAnimator");
