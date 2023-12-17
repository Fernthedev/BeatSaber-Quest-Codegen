#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceDescription)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceDescription__DeviceDescriptionJson;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceDescription__DeviceDescriptionJson;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceDescription);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson);
// Type: ::DeviceDescriptionJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6619))
// CS Name: ::InputDeviceDescription::DeviceDescriptionJson
struct CORDL_TYPE __InputDeviceDescription__DeviceDescriptionJson : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field interface offset 0x0
 __declspec(property(get=__get_interface, put=__set_interface)) ::StringW  interface;

/// @brief Field type offset 0x8
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

/// @brief Field product offset 0x10
 __declspec(property(get=__get_product, put=__set_product)) ::StringW  product;

/// @brief Field serial offset 0x18
 __declspec(property(get=__get_serial, put=__set_serial)) ::StringW  serial;

/// @brief Field version offset 0x20
 __declspec(property(get=__get_version, put=__set_version)) ::StringW  version;

/// @brief Field manufacturer offset 0x28
 __declspec(property(get=__get_manufacturer, put=__set_manufacturer)) ::StringW  manufacturer;

/// @brief Field capabilities offset 0x30
 __declspec(property(get=__get_capabilities, put=__set_capabilities)) ::StringW  capabilities;

constexpr void __set_interface(::StringW  value) ;

constexpr ::StringW& __get_interface() ;

constexpr ::StringW const& __get_interface() const;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

constexpr void __set_product(::StringW  value) ;

constexpr ::StringW& __get_product() ;

constexpr ::StringW const& __get_product() const;

constexpr void __set_serial(::StringW  value) ;

constexpr ::StringW& __get_serial() ;

constexpr ::StringW const& __get_serial() const;

constexpr void __set_version(::StringW  value) ;

constexpr ::StringW& __get_version() ;

constexpr ::StringW const& __get_version() const;

constexpr void __set_manufacturer(::StringW  value) ;

constexpr ::StringW& __get_manufacturer() ;

constexpr ::StringW const& __get_manufacturer() const;

constexpr void __set_capabilities(::StringW  value) ;

constexpr ::StringW& __get_capabilities() ;

constexpr ::StringW const& __get_capabilities() const;

// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "serial", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "capabilities", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __InputDeviceDescription__DeviceDescriptionJson(::StringW  interface, ::StringW  type, ::StringW  product, ::StringW  serial, ::StringW  version, ::StringW  manufacturer, ::StringW  capabilities) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputDeviceDescription__DeviceDescriptionJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputDeviceDescription__DeviceDescriptionJson()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputDeviceDescription
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6620))
// CS Name: ::UnityEngine.InputSystem.Layouts::InputDeviceDescription
struct CORDL_TYPE InputDeviceDescription : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
using DeviceDescriptionJson = ::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_InterfaceName offset 0x0
 __declspec(property(get=__get_m_InterfaceName, put=__set_m_InterfaceName)) ::StringW  m_InterfaceName;

/// @brief Field m_DeviceClass offset 0x8
 __declspec(property(get=__get_m_DeviceClass, put=__set_m_DeviceClass)) ::StringW  m_DeviceClass;

/// @brief Field m_Manufacturer offset 0x10
 __declspec(property(get=__get_m_Manufacturer, put=__set_m_Manufacturer)) ::StringW  m_Manufacturer;

/// @brief Field m_Product offset 0x18
 __declspec(property(get=__get_m_Product, put=__set_m_Product)) ::StringW  m_Product;

/// @brief Field m_Serial offset 0x20
 __declspec(property(get=__get_m_Serial, put=__set_m_Serial)) ::StringW  m_Serial;

/// @brief Field m_Version offset 0x28
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) ::StringW  m_Version;

/// @brief Field m_Capabilities offset 0x30
 __declspec(property(get=__get_m_Capabilities, put=__set_m_Capabilities)) ::StringW  m_Capabilities;

 __declspec(property(get=get_interfaceName, put=set_interfaceName)) ::StringW  interfaceName;

 __declspec(property(get=get_deviceClass, put=set_deviceClass)) ::StringW  deviceClass;

 __declspec(property(get=get_manufacturer, put=set_manufacturer)) ::StringW  manufacturer;

 __declspec(property(get=get_product, put=set_product)) ::StringW  product;

 __declspec(property(get=get_serial, put=set_serial)) ::StringW  serial;

 __declspec(property(get=get_version, put=set_version)) ::StringW  version;

 __declspec(property(get=get_capabilities, put=set_capabilities)) ::StringW  capabilities;

 __declspec(property(get=get_empty)) bool  empty;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*() ;

constexpr void __set_m_InterfaceName(::StringW  value) ;

constexpr ::StringW& __get_m_InterfaceName() ;

constexpr ::StringW const& __get_m_InterfaceName() const;

constexpr void __set_m_DeviceClass(::StringW  value) ;

constexpr ::StringW& __get_m_DeviceClass() ;

constexpr ::StringW const& __get_m_DeviceClass() const;

constexpr void __set_m_Manufacturer(::StringW  value) ;

constexpr ::StringW& __get_m_Manufacturer() ;

constexpr ::StringW const& __get_m_Manufacturer() const;

constexpr void __set_m_Product(::StringW  value) ;

constexpr ::StringW& __get_m_Product() ;

constexpr ::StringW const& __get_m_Product() const;

constexpr void __set_m_Serial(::StringW  value) ;

constexpr ::StringW& __get_m_Serial() ;

constexpr ::StringW const& __get_m_Serial() const;

constexpr void __set_m_Version(::StringW  value) ;

constexpr ::StringW& __get_m_Version() ;

constexpr ::StringW const& __get_m_Version() const;

constexpr void __set_m_Capabilities(::StringW  value) ;

constexpr ::StringW& __get_m_Capabilities() ;

constexpr ::StringW const& __get_m_Capabilities() const;

/// @brief Method get_interfaceName addr 0x2b06954 size 0x8 virtual false final false
inline ::StringW get_interfaceName() ;

/// @brief Method set_interfaceName addr 0x2b0695c size 0x8 virtual false final false
inline void set_interfaceName(::StringW  value) ;

/// @brief Method get_deviceClass addr 0x2b06964 size 0x8 virtual false final false
inline ::StringW get_deviceClass() ;

/// @brief Method set_deviceClass addr 0x2b0696c size 0x8 virtual false final false
inline void set_deviceClass(::StringW  value) ;

/// @brief Method get_manufacturer addr 0x2b06974 size 0x8 virtual false final false
inline ::StringW get_manufacturer() ;

/// @brief Method set_manufacturer addr 0x2b0697c size 0x8 virtual false final false
inline void set_manufacturer(::StringW  value) ;

/// @brief Method get_product addr 0x2b06984 size 0x8 virtual false final false
inline ::StringW get_product() ;

/// @brief Method set_product addr 0x2b0698c size 0x8 virtual false final false
inline void set_product(::StringW  value) ;

/// @brief Method get_serial addr 0x2b06994 size 0x8 virtual false final false
inline ::StringW get_serial() ;

/// @brief Method set_serial addr 0x2b0699c size 0x8 virtual false final false
inline void set_serial(::StringW  value) ;

/// @brief Method get_version addr 0x2b069a4 size 0x8 virtual false final false
inline ::StringW get_version() ;

/// @brief Method set_version addr 0x2b069ac size 0x8 virtual false final false
inline void set_version(::StringW  value) ;

/// @brief Method get_capabilities addr 0x2b069b4 size 0x8 virtual false final false
inline ::StringW get_capabilities() ;

/// @brief Method set_capabilities addr 0x2b069bc size 0x8 virtual false final false
inline void set_capabilities(::StringW  value) ;

/// @brief Method get_empty addr 0x2b069c4 size 0x84 virtual false final false
inline bool get_empty() ;

/// @brief Method ToString addr 0x2b06a48 size 0x304 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0x2b06d4c size 0xb0 virtual true final true
inline bool Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  other) ;

/// @brief Method Equals addr 0x2b06dfc size 0x98 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2b06e94 size 0x128 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2b06fbc size 0x38 virtual false final false
static inline bool op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  left, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  right) ;

/// @brief Method op_Inequality addr 0x2b06ff4 size 0x3c virtual false final false
static inline bool op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  left, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  right) ;

/// @brief Method ToJson addr 0x2b07030 size 0x80 virtual false final false
inline ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2b070b0 size 0xcc virtual false final false
static inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription FromJson(::StringW  json) ;

/// @brief Method ComparePropertyToDeviceDescriptor addr 0x2b0717c size 0x90 virtual false final false
static inline bool ComparePropertyToDeviceDescriptor(::StringW  propertyName, ::StringW  propertyValue, ::StringW  deviceDescriptor) ;

// Ctor Parameters [CppParam { name: "m_InterfaceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_DeviceClass", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Serial", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Capabilities", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InputDeviceDescription(::StringW  m_InterfaceName, ::StringW  m_DeviceClass, ::StringW  m_Manufacturer, ::StringW  m_Product, ::StringW  m_Serial, ::StringW  m_Version, ::StringW  m_Capabilities) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputDeviceDescription(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputDeviceDescription()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription/DeviceDescriptionJson");
