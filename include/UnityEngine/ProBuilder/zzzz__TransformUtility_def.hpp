#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TransformUtility)
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class TransformUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::TransformUtility);
// Type: UnityEngine.ProBuilder::TransformUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12208))
// CS Name: ::UnityEngine.ProBuilder::TransformUtility*
class CORDL_TYPE TransformUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_ChildStack(::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*,::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*,::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>* getStaticF_s_ChildStack() ;

/// @brief Method UnparentChildren addr 0x2b7c2e4 size 0x150 virtual false final false
static inline void UnparentChildren(::UnityEngine::Transform*  t) ;

/// @brief Method ReparentChildren addr 0x2b7c434 size 0x128 virtual false final false
static inline void ReparentChildren(::UnityEngine::Transform*  t) ;

/// @brief Method TransformVertex addr 0x2b7c55c size 0x1e4 virtual false final false
static inline ::UnityEngine::ProBuilder::Vertex* TransformVertex(::UnityEngine::Transform*  transform, ::UnityEngine::ProBuilder::Vertex*  vertex) ;

/// @brief Method InverseTransformVertex addr 0x2b7c740 size 0x1dc virtual false final false
static inline ::UnityEngine::ProBuilder::Vertex* InverseTransformVertex(::UnityEngine::Transform*  transform, ::UnityEngine::ProBuilder::Vertex*  vertex) ;

// Ctor Parameters [CppParam { name: "", ty: "TransformUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformUtility(TransformUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformUtility(TransformUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TransformUtility()  = default;
public:


// Fields

// Static field s_ChildStack


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::TransformUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::TransformUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::TransformUtility*, "UnityEngine.ProBuilder", "TransformUtility");
