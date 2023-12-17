#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_DetailProperties)
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_DetailProperties);
// Type: HoudiniEngineUnity::HEU_DetailProperties
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9955))
// CS Name: ::HoudiniEngineUnity::HEU_DetailProperties*
class CORDL_TYPE HEU_DetailProperties : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _detailDistance offset 0x10
 __declspec(property(get=__get__detailDistance, put=__set__detailDistance)) float_t  _detailDistance;

/// @brief Field _detailDensity offset 0x14
 __declspec(property(get=__get__detailDensity, put=__set__detailDensity)) float_t  _detailDensity;

/// @brief Field _detailResolution offset 0x18
 __declspec(property(get=__get__detailResolution, put=__set__detailResolution)) int32_t  _detailResolution;

/// @brief Field _detailResolutionPerPatch offset 0x1c
 __declspec(property(get=__get__detailResolutionPerPatch, put=__set__detailResolutionPerPatch)) int32_t  _detailResolutionPerPatch;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*() noexcept;

constexpr void __set__detailDistance(float_t  value) ;

constexpr float_t& __get__detailDistance() ;

constexpr float_t const& __get__detailDistance() const;

constexpr void __set__detailDensity(float_t  value) ;

constexpr float_t& __get__detailDensity() ;

constexpr float_t const& __get__detailDensity() const;

constexpr void __set__detailResolution(int32_t  value) ;

constexpr int32_t& __get__detailResolution() ;

constexpr int32_t const& __get__detailResolution() const;

constexpr void __set__detailResolutionPerPatch(int32_t  value) ;

constexpr int32_t& __get__detailResolutionPerPatch() ;

constexpr int32_t const& __get__detailResolutionPerPatch() const;

/// @brief Method IsEquivalentTo addr 0x21ea60c size 0x1f0 virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailProperties*  other) ;

static inline ::HoudiniEngineUnity::HEU_DetailProperties* New_ctor() ;

/// @brief Method .ctor addr 0x21ea7fc size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_DetailProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_DetailProperties(HEU_DetailProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_DetailProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_DetailProperties(HEU_DetailProperties const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_DetailProperties()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_DetailProperties, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_DetailProperties);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_DetailProperties*, "HoudiniEngineUnity", "HEU_DetailProperties");
