#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplierValuesRecorder)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
struct __MultiplierValuesRecorder__MultiplierValue;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplierValuesRecorder;
}
namespace GlobalNamespace {
struct __MultiplierValuesRecorder__MultiplierValue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplierValuesRecorder);
MARK_VAL_T(::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue);
// Type: ::MultiplierValue
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5270))
// CS Name: ::MultiplierValuesRecorder::MultiplierValue
struct CORDL_TYPE __MultiplierValuesRecorder__MultiplierValue : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field multiplier offset 0x0
 __declspec(property(get=__get_multiplier, put=__set_multiplier)) int32_t  multiplier;

/// @brief Field time offset 0x4
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

constexpr void __set_multiplier(int32_t  value) ;

constexpr int32_t& __get_multiplier() ;

constexpr int32_t const& __get_multiplier() const;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

/// @brief Method .ctor addr 0x2260084 size 0xc virtual false final false
inline void _ctor(int32_t  multiplier, float_t  time) ;

// Ctor Parameters [CppParam { name: "multiplier", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
constexpr __MultiplierValuesRecorder__MultiplierValue(int32_t  multiplier, float_t  time) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplierValuesRecorder__MultiplierValue(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplierValuesRecorder__MultiplierValue()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplierValuesRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5271))
// CS Name: ::MultiplierValuesRecorder*
class CORDL_TYPE MultiplierValuesRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MultiplierValue = ::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _scoreController offset 0x18
 __declspec(property(get=__get__scoreController, put=__set__scoreController)) ::GlobalNamespace::IScoreController*  _scoreController;

/// @brief Field _audioTimeSyncController offset 0x20
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _multiplierValues offset 0x28
 __declspec(property(get=__get__multiplierValues, put=__set__multiplierValues)) ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>*  _multiplierValues;

 __declspec(property(get=get_multiplierValues)) ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>*  multiplierValues;

constexpr void __set__scoreController(::GlobalNamespace::IScoreController*  value) ;

constexpr ::GlobalNamespace::IScoreController* __get__scoreController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> __get__scoreController() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__multiplierValues(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>* __get__multiplierValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>*> __get__multiplierValues() const;

/// @brief Method get_multiplierValues addr 0x225fd88 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>* get_multiplierValues() ;

/// @brief Method Start addr 0x225fd90 size 0xf0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x225fe80 size 0x108 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleScoreControllerMultiplierDidChange addr 0x225ff88 size 0xfc virtual false final false
inline void HandleScoreControllerMultiplierDidChange(int32_t  multiplier, float_t  multiplierProgress) ;

static inline ::GlobalNamespace::MultiplierValuesRecorder* New_ctor() ;

/// @brief Method .ctor addr 0x2260090 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplierValuesRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplierValuesRecorder(MultiplierValuesRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplierValuesRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplierValuesRecorder(MultiplierValuesRecorder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplierValuesRecorder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplierValuesRecorder, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplierValuesRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplierValuesRecorder*, "", "MultiplierValuesRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue, "", "MultiplierValuesRecorder/MultiplierValue");
