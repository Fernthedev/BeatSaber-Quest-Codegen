#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OculusUsages)
namespace UnityEngine::XR {
template<typename T>
struct InputFeatureUsage_1;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class OculusUsages;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::OculusUsages);
// Type: Unity.XR.Oculus::OculusUsages
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15151))
// CS Name: ::Unity.XR.Oculus::OculusUsages*
class CORDL_TYPE OculusUsages : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_thumbrest(::UnityEngine::XR::InputFeatureUsage_1<bool>  value) ;

static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_thumbrest() ;

static inline void setStaticF_indexTouch(::UnityEngine::XR::InputFeatureUsage_1<bool>  value) ;

static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_indexTouch() ;

static inline void setStaticF_thumbTouch(::UnityEngine::XR::InputFeatureUsage_1<bool>  value) ;

static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_thumbTouch() ;

// Ctor Parameters [CppParam { name: "", ty: "OculusUsages", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusUsages(OculusUsages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusUsages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusUsages(OculusUsages const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusUsages()  = default;
public:


// Fields

// Static field thumbrest

// Static field indexTouch

// Static field thumbTouch


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusUsages, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::OculusUsages);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusUsages*, "Unity.XR.Oculus", "OculusUsages");
