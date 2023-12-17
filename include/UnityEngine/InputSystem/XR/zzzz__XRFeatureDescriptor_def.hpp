#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRFeatureDescriptor)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::XR {
struct UsageHint;
}
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::XRFeatureDescriptor);
// Type: UnityEngine.InputSystem.XR::XRFeatureDescriptor
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6335))
// CS Name: ::UnityEngine.InputSystem.XR::XRFeatureDescriptor
struct CORDL_TYPE XRFeatureDescriptor : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field usageHints offset 0x8
 __declspec(property(get=__get_usageHints, put=__set_usageHints)) ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*  usageHints;

/// @brief Field featureType offset 0x10
 __declspec(property(get=__get_featureType, put=__set_featureType)) ::UnityEngine::InputSystem::XR::FeatureType  featureType;

/// @brief Field customSize offset 0x14
 __declspec(property(get=__get_customSize, put=__set_customSize)) uint32_t  customSize;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_usageHints(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>* __get_usageHints() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*> __get_usageHints() const;

constexpr void __set_featureType(::UnityEngine::InputSystem::XR::FeatureType  value) ;

constexpr ::UnityEngine::InputSystem::XR::FeatureType& __get_featureType() ;

constexpr ::UnityEngine::InputSystem::XR::FeatureType const& __get_featureType() const;

constexpr void __set_customSize(uint32_t  value) ;

constexpr uint32_t& __get_customSize() ;

constexpr uint32_t const& __get_customSize() const;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "usageHints", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*", modifiers: "", def_value: None }, CppParam { name: "featureType", ty: "::UnityEngine::InputSystem::XR::FeatureType", modifiers: "", def_value: None }, CppParam { name: "customSize", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr XRFeatureDescriptor(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*  usageHints, ::UnityEngine::InputSystem::XR::FeatureType  featureType, uint32_t  customSize) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XRFeatureDescriptor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XRFeatureDescriptor()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRFeatureDescriptor, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRFeatureDescriptor, "UnityEngine.InputSystem.XR", "XRFeatureDescriptor");
