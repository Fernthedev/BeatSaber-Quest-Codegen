#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockVectorAnimator)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockVectorAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockVectorAnimator);
// Type: ::MaterialPropertyBlockVectorAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14571))
// CS Name: ::MaterialPropertyBlockVectorAnimator*
class CORDL_TYPE MaterialPropertyBlockVectorAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::MaterialPropertyBlockAnimator)]{};

/// @brief Field _vector offset 0x30
 __declspec(property(get=__get__vector, put=__set__vector)) ::UnityEngine::Vector4  _vector;

constexpr void __set__vector(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get__vector() ;

constexpr ::UnityEngine::Vector4 const& __get__vector() const;

/// @brief Method SetProperty addr 0x211546c size 0x34 virtual true final false
inline void SetProperty() ;

static inline ::GlobalNamespace::MaterialPropertyBlockVectorAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x21154a0 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockVectorAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockVectorAnimator(MaterialPropertyBlockVectorAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockVectorAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockVectorAnimator(MaterialPropertyBlockVectorAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialPropertyBlockVectorAnimator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockVectorAnimator, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockVectorAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockVectorAnimator*, "", "MaterialPropertyBlockVectorAnimator");
