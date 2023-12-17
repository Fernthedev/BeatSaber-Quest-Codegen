#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointGenerator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace System {
class Random;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PointGenerator);
// Type: UnityEngine.ProBuilder.Poly2Tri::PointGenerator
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15346))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::PointGenerator*
class CORDL_TYPE PointGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_RNG(::System::Random*  value) ;

static inline ::System::Random* getStaticF_RNG() ;

/// @brief Method UniformDistribution addr 0x2b3591c size 0x1c8 virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* UniformDistribution(int32_t  n, double_t  scale) ;

/// @brief Method UniformGrid addr 0x2b35ae4 size 0x18c virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* UniformGrid(int32_t  n, double_t  scale) ;

static inline ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x2b35c70 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PointGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointGenerator(PointGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointGenerator(PointGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointGenerator()  = default;
public:


// Fields

// Static field RNG


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PointGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*, "UnityEngine.ProBuilder.Poly2Tri", "PointGenerator");
