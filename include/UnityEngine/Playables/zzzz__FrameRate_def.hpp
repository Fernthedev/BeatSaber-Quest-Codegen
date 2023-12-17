#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameRate)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct FrameRate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::FrameRate);
// Type: UnityEngine.Playables::FrameRate
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10420))
// CS Name: ::UnityEngine.Playables::FrameRate
struct CORDL_TYPE FrameRate : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Rate offset 0x0
 __declspec(property(get=__get_m_Rate, put=__set_m_Rate)) int32_t  m_Rate;

 __declspec(property(get=get_dropFrame)) bool  dropFrame;

 __declspec(property(get=get_rate)) double_t  rate;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::FrameRate>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::FrameRate>*() ;

static inline void setStaticF_k_24Fps(::UnityEngine::Playables::FrameRate  value) ;

static inline ::UnityEngine::Playables::FrameRate getStaticF_k_24Fps() ;

static inline void setStaticF_k_23_976Fps(::UnityEngine::Playables::FrameRate  value) ;

static inline ::UnityEngine::Playables::FrameRate getStaticF_k_23_976Fps() ;

static inline void setStaticF_k_25Fps(::UnityEngine::Playables::FrameRate  value) ;

static inline ::UnityEngine::Playables::FrameRate getStaticF_k_25Fps() ;

static inline void setStaticF_k_30Fps(::UnityEngine::Playables::FrameRate  value) ;

static inline ::UnityEngine::Playables::FrameRate getStaticF_k_30Fps() ;

static inline void setStaticF_k_29_97Fps(::UnityEngine::Playables::FrameRate  value) ;

static inline ::UnityEngine::Playables::FrameRate getStaticF_k_29_97Fps() ;

static inline void setStaticF_k_50Fps(::UnityEngine::Playables::FrameRate  value) ;

static inline ::UnityEngine::Playables::FrameRate getStaticF_k_50Fps() ;

static inline void setStaticF_k_60Fps(::UnityEngine::Playables::FrameRate  value) ;

static inline ::UnityEngine::Playables::FrameRate getStaticF_k_60Fps() ;

static inline void setStaticF_k_59_94Fps(::UnityEngine::Playables::FrameRate  value) ;

static inline ::UnityEngine::Playables::FrameRate getStaticF_k_59_94Fps() ;

constexpr void __set_m_Rate(int32_t  value) ;

constexpr int32_t& __get_m_Rate() ;

constexpr int32_t const& __get_m_Rate() const;

/// @brief Method get_dropFrame addr 0x2cf5434 size 0xc virtual false final false
inline bool get_dropFrame() ;

/// @brief Method get_rate addr 0x2cf5440 size 0x28 virtual false final false
inline double_t get_rate() ;

/// @brief Method .ctor addr 0x2cf5468 size 0x18 virtual false final false
inline void _ctor(uint32_t  frameRate, bool  drop) ;

/// @brief Method IsValid addr 0x2cf5480 size 0x10 virtual false final false
inline bool IsValid() ;

/// @brief Method Equals addr 0x2cf5490 size 0x10 virtual true final true
inline bool Equals(::UnityEngine::Playables::FrameRate  other) ;

/// @brief Method Equals addr 0x2cf54a0 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x2cf5518 size 0xc virtual false final false
static inline bool op_Equality(::UnityEngine::Playables::FrameRate  a, ::UnityEngine::Playables::FrameRate  b) ;

/// @brief Method GetHashCode addr 0x2cf5524 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf552c size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x2cf5538 size 0x194 virtual false final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method DoubleToFrameRate addr 0x2cf56cc size 0xc4 virtual false final false
static inline ::UnityEngine::Playables::FrameRate DoubleToFrameRate(double_t  framerate) ;

// Ctor Parameters [CppParam { name: "m_Rate", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FrameRate(int32_t  m_Rate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FrameRate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FrameRate()  = default;


// Fields

// Static field k_24Fps

// Static field k_23_976Fps

// Static field k_25Fps

// Static field k_30Fps

// Static field k_29_97Fps

// Static field k_50Fps

// Static field k_60Fps

// Static field k_59_94Fps


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::FrameRate, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameRate, "UnityEngine.Playables", "FrameRate");
