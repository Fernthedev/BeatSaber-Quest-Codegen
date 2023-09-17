#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__MessageWithRoomUnderViewerRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderViewerRoom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithRoomUnderViewerRoom::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithRoomUnderViewerRoom::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257f088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderViewerRoom.GetRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room (::Oculus::Platform::MessageWithRoomUnderViewerRoom::*)()>(&::Oculus::Platform::MessageWithRoomUnderViewerRoom::GetRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25836a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithRoomUnderViewerRoom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderViewerRoom.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room (::Oculus::Platform::MessageWithRoomUnderViewerRoom::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithRoomUnderViewerRoom::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25836e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithRoomUnderViewerRoom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::MessageWithRoomUnderViewerRoom::MessageWithRoomUnderViewerRoom(::cordl_internals::intptr_t c_message)  : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>(THROW_UNLESS(::il2cpp_utils::New<MessageWithRoomUnderViewerRoom>(c_message))) {}
 void ::Oculus::Platform::MessageWithRoomUnderViewerRoom::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 ::Oculus::Platform::Models::Room ::Oculus::Platform::MessageWithRoomUnderViewerRoom::GetRoom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom>::get(),
                            "GetRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::Room ::Oculus::Platform::MessageWithRoomUnderViewerRoom::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
} // end anonymous namespace
