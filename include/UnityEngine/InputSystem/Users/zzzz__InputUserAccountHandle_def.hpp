#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUserAccountHandle)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUserAccountHandle);
// Type: UnityEngine.InputSystem.Users::InputUserAccountHandle
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6365))
// CS Name: ::UnityEngine.InputSystem.Users::InputUserAccountHandle
struct CORDL_TYPE InputUserAccountHandle : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiName offset 0x0
 __declspec(property(get=__get_m_ApiName, put=__set_m_ApiName)) ::StringW  m_ApiName;

/// @brief Field m_Handle offset 0x8
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) uint64_t  m_Handle;

 __declspec(property(get=get_apiName)) ::StringW  apiName;

 __declspec(property(get=get_handle)) uint64_t  handle;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>*() ;

constexpr void __set_m_ApiName(::StringW  value) ;

constexpr ::StringW& __get_m_ApiName() ;

constexpr ::StringW const& __get_m_ApiName() const;

constexpr void __set_m_Handle(uint64_t  value) ;

constexpr uint64_t& __get_m_Handle() ;

constexpr uint64_t const& __get_m_Handle() const;

/// @brief Method get_apiName addr 0x2acf338 size 0x8 virtual false final false
inline ::StringW get_apiName() ;

/// @brief Method get_handle addr 0x2acf340 size 0x8 virtual false final false
inline uint64_t get_handle() ;

/// @brief Method .ctor addr 0x2acf348 size 0x80 virtual false final false
inline void _ctor(::StringW  apiName, uint64_t  handle) ;

/// @brief Method ToString addr 0x2acf3c8 size 0xc4 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0x2acf48c size 0xb0 virtual true final true
inline bool Equals(::UnityEngine::InputSystem::Users::InputUserAccountHandle  other) ;

/// @brief Method Equals addr 0x2acf53c size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x2acf224 size 0x2c virtual false final false
static inline bool op_Equality(::UnityEngine::InputSystem::Users::InputUserAccountHandle  left, ::UnityEngine::InputSystem::Users::InputUserAccountHandle  right) ;

/// @brief Method op_Inequality addr 0x2acf5b4 size 0x30 virtual false final false
static inline bool op_Inequality(::UnityEngine::InputSystem::Users::InputUserAccountHandle  left, ::UnityEngine::InputSystem::Users::InputUserAccountHandle  right) ;

/// @brief Method GetHashCode addr 0x2acf5e4 size 0x58 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_ApiName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Handle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr InputUserAccountHandle(::StringW  m_ApiName, uint64_t  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputUserAccountHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputUserAccountHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUserAccountHandle, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserAccountHandle, "UnityEngine.InputSystem.Users", "InputUserAccountHandle");
