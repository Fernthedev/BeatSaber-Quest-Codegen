#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyCommerceHelper)
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult);
MARK_VAL_T(::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult);
MARK_VAL_T(::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult);
MARK_REF_PTR_T(::GlobalNamespace::ISonyCommerceHelper);
MARK_VAL_T(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult);
// Type: ::DisplayProductBrowseDialogResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4140))
// CS Name: ::ISonyCommerceHelper::DisplayProductBrowseDialogResult
struct CORDL_TYPE __ISonyCommerceHelper__DisplayProductBrowseDialogResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped
enum struct ____ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult const OK;

/// @brief Field Failed value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped () const noexcept {
return std::bit_cast<____ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ISonyCommerceHelper__DisplayProductBrowseDialogResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ISonyCommerceHelper__DisplayProductBrowseDialogResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ISonyCommerceHelper__DisplayProductBrowseDialogResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DisplayCategoryBrowseDialogResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4141))
// CS Name: ::ISonyCommerceHelper::DisplayCategoryBrowseDialogResult
struct CORDL_TYPE __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped
enum struct ____ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult const OK;

/// @brief Field Failed value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped () const noexcept {
return std::bit_cast<____ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GetAdditionalContentEntitlementsResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4142))
// CS Name: ::ISonyCommerceHelper::GetAdditionalContentEntitlementsResult
struct CORDL_TYPE __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped
enum struct ____ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const OK;

/// @brief Field Failed value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped () const noexcept {
return std::bit_cast<____ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AdditionalContentEntitlementsAsyncResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4143))
// CS Name: ::ISonyCommerceHelper::AdditionalContentEntitlementsAsyncResult
struct CORDL_TYPE __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field result offset 0x0
 __declspec(property(get=__get_result, put=__set_result)) ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult  result;

/// @brief Field entitlementsLabels offset 0x8
 __declspec(property(get=__get_entitlementsLabels, put=__set_entitlementsLabels)) ::ArrayW<::StringW,::Array<::StringW>*>  entitlementsLabels;

constexpr void __set_result(::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult  value) ;

constexpr ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult& __get_result() ;

constexpr ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const& __get_result() const;

constexpr void __set_entitlementsLabels(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_entitlementsLabels() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_entitlementsLabels() const;

// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult", modifiers: "", def_value: None }, CppParam { name: "entitlementsLabels", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
constexpr __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult  result, ::ArrayW<::StringW,::Array<::StringW>*>  entitlementsLabels) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ISonyCommerceHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4144))
// CS Name: ::ISonyCommerceHelper*
class CORDL_TYPE ISonyCommerceHelper {
public:
// Declarations
using AdditionalContentEntitlementsAsyncResult = ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;

using GetAdditionalContentEntitlementsResult = ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult;

using DisplayCategoryBrowseDialogResult = ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult;

using DisplayProductBrowseDialogResult = ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult;

/// @brief Method GetAdditionalContentEntitlementsAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* GetAdditionalContentEntitlementsAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DisplayProductBrowseDialogAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>* DisplayProductBrowseDialogAsync(::StringW  productLabel, ::System::Threading::CancellationToken  token) ;

/// @brief Method DisplayCategoryBrowseDialogAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult>* DisplayCategoryBrowseDialogAsync(::StringW  categoryLabel, ::System::Threading::CancellationToken  token) ;

// Ctor Parameters [CppParam { name: "", ty: "ISonyCommerceHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISonyCommerceHelper(ISonyCommerceHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISonyCommerceHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISonyCommerceHelper(ISonyCommerceHelper const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult, "", "ISonyCommerceHelper/DisplayCategoryBrowseDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult, "", "ISonyCommerceHelper/DisplayProductBrowseDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult, "", "ISonyCommerceHelper/GetAdditionalContentEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::ISonyCommerceHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyCommerceHelper*, "", "ISonyCommerceHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, "", "ISonyCommerceHelper/AdditionalContentEntitlementsAsyncResult");
