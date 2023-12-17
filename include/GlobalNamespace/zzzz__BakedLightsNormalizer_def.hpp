#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightsNormalizer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace GlobalNamespace {
struct __LightConstants__BakeId;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightsNormalizer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightsNormalizer);
// Type: ::BakedLightsNormalizer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14513))
// CS Name: ::BakedLightsNormalizer*
class CORDL_TYPE BakedLightsNormalizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kMaxFramesWithoutUpdate offset 0x0
static constexpr int32_t  kMaxFramesWithoutUpdate{static_cast<int32_t>(0x5)};

/// @brief Field _maxTotalIntensity offset 0x18
 __declspec(property(get=__get__maxTotalIntensity, put=__set__maxTotalIntensity)) float_t  _maxTotalIntensity;

/// @brief Field _lightmapLightDict offset 0x20
 __declspec(property(get=__get__lightmapLightDict, put=__set__lightmapLightDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId,::GlobalNamespace::LightmapLightWithIds*>*  _lightmapLightDict;

/// @brief Field _lightmapDictInitialized offset 0x28
 __declspec(property(get=__get__lightmapDictInitialized, put=__set__lightmapDictInitialized)) bool  _lightmapDictInitialized;

/// @brief Field _grayscaleTotal offset 0x2c
 __declspec(property(get=__get__grayscaleTotal, put=__set__grayscaleTotal)) float_t  _grayscaleTotal;

/// @brief Field _lastCalculatedOnFrame offset 0x30
 __declspec(property(get=__get__lastCalculatedOnFrame, put=__set__lastCalculatedOnFrame)) int32_t  _lastCalculatedOnFrame;

/// @brief Field _grayscaleCalculatedOnce offset 0x34
 __declspec(property(get=__get__grayscaleCalculatedOnce, put=__set__grayscaleCalculatedOnce)) bool  _grayscaleCalculatedOnce;

/// @brief Field _newUpdates offset 0x35
 __declspec(property(get=__get__newUpdates, put=__set__newUpdates)) bool  _newUpdates;

 __declspec(property(get=get_lightmapLightDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId,::GlobalNamespace::LightmapLightWithIds*>*  lightmapLightDict;

 __declspec(property(get=get_maxTotalIntensity)) float_t  maxTotalIntensity;

constexpr void __set__maxTotalIntensity(float_t  value) ;

constexpr float_t& __get__maxTotalIntensity() ;

constexpr float_t const& __get__maxTotalIntensity() const;

constexpr void __set__lightmapLightDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId,::GlobalNamespace::LightmapLightWithIds*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId,::GlobalNamespace::LightmapLightWithIds*>* __get__lightmapLightDict() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId,::GlobalNamespace::LightmapLightWithIds*>*> __get__lightmapLightDict() const;

constexpr void __set__lightmapDictInitialized(bool  value) ;

constexpr bool& __get__lightmapDictInitialized() ;

constexpr bool const& __get__lightmapDictInitialized() const;

constexpr void __set__grayscaleTotal(float_t  value) ;

constexpr float_t& __get__grayscaleTotal() ;

constexpr float_t const& __get__grayscaleTotal() const;

constexpr void __set__lastCalculatedOnFrame(int32_t  value) ;

constexpr int32_t& __get__lastCalculatedOnFrame() ;

constexpr int32_t const& __get__lastCalculatedOnFrame() const;

constexpr void __set__grayscaleCalculatedOnce(bool  value) ;

constexpr bool& __get__grayscaleCalculatedOnce() ;

constexpr bool const& __get__grayscaleCalculatedOnce() const;

constexpr void __set__newUpdates(bool  value) ;

constexpr bool& __get__newUpdates() ;

constexpr bool const& __get__newUpdates() const;

/// @brief Method get_lightmapLightDict addr 0x210e38c size 0x8 virtual false final false
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId,::GlobalNamespace::LightmapLightWithIds*>* get_lightmapLightDict() ;

/// @brief Method get_maxTotalIntensity addr 0x210e394 size 0x8 virtual false final false
inline float_t get_maxTotalIntensity() ;

/// @brief Method LateUpdate addr 0x210e39c size 0x3c virtual false final false
inline void LateUpdate() ;

/// @brief Method GetLightmapLights addr 0x210e5fc size 0x10c virtual false final false
inline void GetLightmapLights() ;

/// @brief Method UpdateGrayscaleTotal addr 0x210e3d8 size 0x224 virtual false final false
inline void UpdateGrayscaleTotal() ;

/// @brief Method GetNormalizationMultiplier addr 0x210e708 size 0x48 virtual false final false
inline float_t GetNormalizationMultiplier() ;

static inline ::GlobalNamespace::BakedLightsNormalizer* New_ctor() ;

/// @brief Method .ctor addr 0x210e750 size 0x8c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightsNormalizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BakedLightsNormalizer(BakedLightsNormalizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightsNormalizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakedLightsNormalizer(BakedLightsNormalizer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BakedLightsNormalizer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightsNormalizer, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightsNormalizer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightsNormalizer*, "", "BakedLightsNormalizer");
