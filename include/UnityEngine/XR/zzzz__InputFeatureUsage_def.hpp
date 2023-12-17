#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputFeatureUsage)
namespace UnityEngine::XR {
struct InputFeatureType;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR {
struct InputFeatureUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputFeatureUsage);
// Type: UnityEngine.XR::InputFeatureUsage
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15619))
// CS Name: ::UnityEngine.XR::InputFeatureUsage
struct CORDL_TYPE InputFeatureUsage : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Name offset 0x0
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_InternalType offset 0x8
 __declspec(property(get=__get_m_InternalType, put=__set_m_InternalType)) ::UnityEngine::XR::InputFeatureType  m_InternalType;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_internalType)) ::UnityEngine::XR::InputFeatureType  internalType;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*() ;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_InternalType(::UnityEngine::XR::InputFeatureType  value) ;

constexpr ::UnityEngine::XR::InputFeatureType& __get_m_InternalType() ;

constexpr ::UnityEngine::XR::InputFeatureType const& __get_m_InternalType() const;

/// @brief Method get_name addr 0x2eb2030 size 0x8 virtual false final false
inline ::StringW get_name() ;

/// @brief Method get_internalType addr 0x2eb2038 size 0x8 virtual false final false
inline ::UnityEngine::XR::InputFeatureType get_internalType() ;

/// @brief Method Equals addr 0x2eb2040 size 0x88 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2eb20c8 size 0x40 virtual true final true
inline bool Equals(::UnityEngine::XR::InputFeatureUsage  other) ;

/// @brief Method GetHashCode addr 0x2eb2108 size 0x50 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_InternalType", ty: "::UnityEngine::XR::InputFeatureType", modifiers: "", def_value: None }]
constexpr InputFeatureUsage(::StringW  m_Name, ::UnityEngine::XR::InputFeatureType  m_InternalType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputFeatureUsage(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputFeatureUsage()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputFeatureUsage, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputFeatureUsage, "UnityEngine.XR", "InputFeatureUsage");
